/*
  Copyright 2019-2022, Awesome Audio Apparatus.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

      https://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
      limitations under the License.
*/

#include "cv_outport.h"

#include "clipping.h"
#include "demiurge.h"

void cv_outport_init(cv_outport_t *handle, int position)
{
    configASSERT(position > 0 && position <= DEMIURGE_NUM_CVOUTPUTS)
    handle->me.read_fn = cv_outport_read;
    handle->me.data = handle;
#ifdef DEMIURGE_POST_FUNCTION
    handle->me.post_fn = clip_cv;
#endif
    handle->position = position - 1 + DEMIURGE_CVOUTPUT_OFFSET;
    handle->registered = false;
}

void cv_outport_configure_input(cv_outport_t *handle, signal_t *input)
{
    handle->input = input;
    if (!handle->registered)
    {
        demiurge_registerSink(&handle->me);
        handle->registered = true;
    }
}

float cv_outport_read(signal_t *handle, uint64_t time)
{
    cv_outport_t *port = (cv_outport_t *) handle->data;
    if (time > handle->last_calc)
    {
        handle->last_calc = time;
        signal_t *upstream = port->input;
        float result = upstream->read_fn(upstream, time);
#ifdef DEMIURGE_POST_FUNCTION
        result = handle->post_fn(result);
#endif
        handle->cached = result;
        outputs[port->position] = result;
        return result;
    }
    return handle->cached;
}


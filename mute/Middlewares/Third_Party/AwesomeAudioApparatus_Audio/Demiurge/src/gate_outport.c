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

#include "gate_outport.h"

#include "clipping.h"
#include "demiurge.h"

void gate_outport_init(gate_outport_t *handle, int position)
{
    configASSERT(position > 0 && position <= DEMIURGE_NUM_GATES)
    handle->me.read_fn = gate_outport_read;
    handle->me.data = handle;
#ifdef DEMIURGE_POST_FUNCTION
    handle->me.post_fn = clip_gate;
#endif
    handle->position = position - 1;
    handle->registered = false;
    set_gate_to_output(position);
}

void gate_outport_configure_input(gate_outport_t *handle, signal_t *input)
{
    handle->input = input;
    if (!handle->registered)
    {
        demiurge_registerSink(&handle->me);
        handle->registered = true;
    }
}

float gate_outport_read(signal_t *handle, uint64_t time)
{
    if (time > handle->last_calc)
    {
        gate_outport_t *port = (gate_outport_t *) handle->data;
        handle->last_calc = time;
        signal_t *upstream = port->input;
        float result = upstream->read_fn(upstream, time);
#ifdef DEMIURGE_POST_FUNCTION
        result = handle->post_fn(fn);
#endif
        handle->cached = result;
        return result;
    }
    return handle->cached;
}


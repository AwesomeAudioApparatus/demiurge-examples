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

#ifndef _DEMIURGE_GATEPORT_H_
#define _DEMIURGE_GATEPORT_H_

#include "signal.h"

typedef struct
{
    int position;
    signal_t me;
} gate_inport_t;

void gate_inport_init(gate_inport_t *handle, int position);

float gate_inport_read(signal_t *handle, uint64_t time);

#endif

/*
  Copyright 2020, Awesome Audio Apparatus.

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

#ifndef _DEMIURGE_CALCULATOR_H_
#define _DEMIURGE_CALCULATOR_H_

#include "signal.h"

typedef struct
{
    signal_t me;
    signal_t *input;
    void *parameters;
    float (*calc_fn)(float input, void *parameters);
} calculator_t;

void calculator_init(calculator_t *handle, void *parameters);

void calculator_configure_input(calculator_t *handle, signal_t *input);

void calculator_configure_function(calculator_t *handle, float (*)(float,void *));

float calculator_read(signal_t *handle, uint64_t time);

#endif

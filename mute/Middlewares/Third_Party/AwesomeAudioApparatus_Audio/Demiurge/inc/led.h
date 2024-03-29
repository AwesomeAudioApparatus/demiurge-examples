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

#ifndef _DEMIURGE_LED_H_
#define _DEMIURGE_LED_H_


#include "signal.h"

typedef enum { Red = 0, Green = 1, Blue = 2 } RGB;

typedef struct
{
    int position;
    bool registered;
    signal_t me;
    signal_t *input;
    float k;
    float m;
} led_t;

void led_init(led_t *handle, int position);

void led_configure_input(led_t *handle, signal_t *input);

void led_configure_sensitivity(led_t *handle, float k, float m);

uint16_t led_position_in_rgb(int position, RGB rgb );

void led_release(led_t *handle);

float led_read(signal_t *handle, uint64_t time);

#endif

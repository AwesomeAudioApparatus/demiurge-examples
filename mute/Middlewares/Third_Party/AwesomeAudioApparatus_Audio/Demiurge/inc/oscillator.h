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

#ifndef _DEMIURGE_OSCILLATOR_H_
#define _DEMIURGE_OSCILLATOR_H_

typedef enum
{
    SINE, SQUARE, TRIANGLE, SAW,
    SINE_DIGITIZED, SQUARE_DIGITIZED, TRIANGLE_DIGITIZED, SAW_DIGITIZED
} oscillator_mode;

#include "signal.h"

#ifndef SINEWAVE_SAMPLES
#define SINEWAVE_SAMPLES 3600
#endif

typedef struct
{
    signal_t me;

    /** Frequency control is according to the following table
     * IN
     * 0  -->  17.32 Hz (C0)
     * 1  -->  32.70 Hz (C1)
     * 2  -->  65.40 Hz (C2)
     * 3  --> 131.81 Hz (C3)
     * 4  --> 261.63 Hz (C4)
     * 5  --> 523.25 Hz (C5)
     * 6  --> 1046.5 Hz (C6)
     * 7  --> 2093.0 Hz (C7)
     * 8  --> 4186.0 Hz (C8)
     */
    signal_t *frequency;
    signal_t *amplitude;
    signal_t *trigger;
    float angular_change_per_tick;
    float angular_pos;
    bool lastTrig;
} oscillator_t;

void oscillator_init(oscillator_t *handle);

void oscillator_configure(oscillator_t *handle, signal_t *freqCtrl, signal_t *amplitudeControl, signal_t *trigCtrl);

void oscillator_configure_frequency(oscillator_t *handle, signal_t *control);

void oscillator_configure_amplitude(oscillator_t *handle, signal_t *control);

void oscillator_configure_trig(oscillator_t *handle, signal_t *control);

void oscillator_configure_mode(oscillator_t *handle, oscillator_mode mode);

float oscillator_sine(signal_t *handle, uint64_t time_in_us);

float oscillator_saw(signal_t *handle, uint64_t time_in_us);

float oscillator_triangle(signal_t *handle, uint64_t time_in_us);

float oscillator_square(signal_t *handle, uint64_t time_in_us);

float oscillator_sine_digitized(signal_t *handle, uint64_t time_in_us);

float oscillator_saw_digitized(signal_t *handle, uint64_t time_in_us);

float oscillator_triangle_digitized(signal_t *handle, uint64_t time_in_us);

float oscillator_square_digitized(signal_t *handle, uint64_t time_in_us);

#endif

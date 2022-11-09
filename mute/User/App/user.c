/* USER CODE BEGIN license */
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
/* USER CODE END license */

#include "demiurge.h"
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* USER CODE BEGIN Variables */
static audio_inport_t input;    // audio input
static button_t mute;           // audio mute button
static led_t muted;             // audio muted indicator

static audio_outport_t out;     // audio output

static scale_t scaler;
/* USER CODE END Variables */

/* USER CODE BEGIN Functions */

/* USER CODE END Functions */

void setup()
{
/* USER CODE BEGIN setup */
	audio_inport_init(&input, 1);                   // Initialize the input port 1 as audio.
    button_init(&mute, 2);                          // Initialize the second button.
    led_init(&muted, led_position_in_rgb(2, Red )); // Initialize RED in the second led.
    audio_outport_init(&out, 1);                    // Initialize the first output as audio.


    // To do a mute, we multiply the incoming signal with either 1.0 (not muted) or by 0.0 (muted).
    // For this we need a "scale" block.
    scale_init(&scaler);

    // We want the "mute" block to be an on/off and set up the button for a toggle function. And we simply set 1.0 as
    // the initial toggle value, and 0.0 as the other value it will toggle between.
    button_configure_for_toggle(&mute, 0, 1);

    // Then we configure the "scaler" block to take input from the the "input" block, and is controlled
    // by the "mute" (i.e. the button) block.
    scale_configure(&scaler, &input.me, &mute.me);

    // Then we connect the Output port to the "scaler" block.
    audio_outport_configure_input(&out, &scaler.me);

    // And we want an indication on the LED whether the mute is on or off. Lit=muted.
    led_configure_input(&muted, &mute.me);
    led_configure_sensitivity(&muted, -64, 64);      // 25% brightness on LED, and we need to invert it.

/* USER CODE END setup */
}

void loop()
{
/* USER CODE BEGIN loop */

/* USER CODE END loop */
}


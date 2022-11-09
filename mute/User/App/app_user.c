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

#include "demiurge.h"
#include "AwesomeAudioApparatus.Demiurge_conf.h"

void MX_User_Init(void)
{
    demiurge_samplerate = SAMPLERATE;
    demiurge_input_mode(1, TYPE_INPUT1);
    demiurge_input_mode(2, TYPE_INPUT2);
    demiurge_input_mode(3, TYPE_INPUT3);
    demiurge_input_mode(4, TYPE_INPUT4);

    demiurge_output_mode(1, TYPE_OUTPUT1);
    demiurge_output_mode(2, TYPE_OUTPUT2);

    demiurge_driver_init();         // Initialize the hardware driver
    demiurge_init();                // Initialize the Demiurge platform
    setup();                        // Set up the application
    demiurge_start();               // Start the audio processing
}

void MX_User_Process(void)
{
    loop();                         // Loop application slow code.
}


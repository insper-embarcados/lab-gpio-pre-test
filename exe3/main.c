/**
 * Copyright (c) 2020 Raspberry Pi (Trading) Ltd.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include "pico/stdlib.h"
#include <stdio.h>

const uint BUTTON_PIN = 26;

int main() {
  stdio_init_all();

  gpio_init(BUTTON_PIN);
  gpio_set_dir(BUTTON_PIN, GPIO_IN);
  gpio_pull_up(BUTTON_PIN);

  int btn_counter = 0;

  while (true) {
    while (gpio_get(BUTTON_PIN) == 1) {
    }

    printf("Button pressed %d times \n", ++btn_counter);

    while (gpio_get(BUTTON_PIN) == 0) {
    }
  }
}

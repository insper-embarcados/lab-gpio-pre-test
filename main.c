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

  int i = 0;
  printf("oi\n");
  while (true) {
    if (gpio_get(BUTTON_PIN) == 0) {
      while (gpio_get(BUTTON_PIN) == 0) {
      }

      printf("Button pressed %d times \n", ++i);
    }
  }
}

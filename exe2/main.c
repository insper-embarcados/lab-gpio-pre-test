#include "pico/stdlib.h"
#include <stdio.h>

const uint MOTION_PIN = 28;
const uint LED_PIN = 3;

int main() {
  stdio_init_all();

  gpio_init(LED_PIN);
  gpio_set_dir(LED_PIN, GPIO_OUT);

  gpio_init(MOTION_PIN);
  gpio_set_dir(MOTION_PIN, GPIO_IN);

  printf("init\n");

  while (true) {
    if (gpio_get(MOTION_PIN))
      printf("ok\n");
  }
}

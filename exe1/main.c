#include "pico/stdlib.h"
#include <stdio.h>

const uint LED_PIN = 2;

int main() {
  stdio_init_all();
  gpio_init(LED_PIN);
  gpio_set_dir(LED_PIN, GPIO_OUT);

  while (true) {
    printf("LED on\n");
    gpio_put(LED_PIN, 1);
    sleep_ms(250);

    printf("LED off\n");
    gpio_put(LED_PIN, 0);
    sleep_ms(250);
  }
  return 0;
}

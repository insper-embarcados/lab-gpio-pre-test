#include "pico/stdlib.h"
#include <stdio.h>

const uint LED_PIN = 3;

int main() {
  stdio_init_all();

  gpio_init(LED_PIN);
  gpio_set_dir(LED_PIN, GPIO_OUT);

  // configurar pino como entrada

  while (true) {
    // ler o sensor
    // e acionar o led de acordo
  }
}

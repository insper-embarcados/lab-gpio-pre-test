#include <stdio.h>
#include "pico/stdlib.h"

#define LED_PIN 2

int main() {

  // codigo init pin aqui
  gpio_init(LED_PIN);
  gpio_set_dir(LED_PIN, GPIO_OUT);
  while (true) {
    printf("LED on\n"); /* nao tirar  */
    // codigo ativa pino aqui 
    gpio_put(LED_PIN, 1); 
    sleep_ms(250);

    printf("LED off\n"); /* nao tirar  */
    // codigo desliga pino aqui 
    gpio_put(LED_PIN, 0); 
    sleep_ms(250);
  }
}

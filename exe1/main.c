#include <stdio.h>
#include "pico/stdlib.h"
#include "pico/cyw43_arch.h"

int main() {

  // codigo init pin aqui
  gpio_init(2);
  gpio_set_dir(2, GPIO_OUT);
  
  while (true) {
    printf("LED on\n"); /* nao tirar  */
    // codigo ativa pino aqui 
    gpio_put(2, 1);
    sleep_ms(250);

    printf("LED off\n"); /* nao tirar  */
    // codigo desliga pino aqui 
    gpio_put(2, 0);
    sleep_ms(250);
  }
}

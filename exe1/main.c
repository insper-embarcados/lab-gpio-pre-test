#include <stdio.h>
#include "pico/stdlib.h"

int main() {
  // codigo init pin aqui
  
  while (true) {
    printf("LED on\n"); /* nao tirar  */
    // codigo ativa pino aqui 
    
    sleep_ms(250);

    printf("LED off\n"); /* nao tirar  */
    // codigo desliga pino aqui 

    sleep_ms(250);
  }
}

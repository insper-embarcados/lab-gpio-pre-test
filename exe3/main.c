#include "pico/stdlib.h"
#include <stdio.h>

int main() {
  stdio_init_all();

  // configurar botao como entrada
  // lembre de ativar o pullup!

  int btn_counter = 0;
  while (true) {

    // toda vez que o botao for apertado fazer esse print
    printf("Button pressed %d times \n", ++btn_counter);
  }
}

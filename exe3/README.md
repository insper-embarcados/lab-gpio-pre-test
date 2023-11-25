# Exercício 3

Botões são componentes mecânicos que quando apertados conectam dois contatos juntos, existem uma infinidade de tipos de botões ou chaves disponíveis no mercado, cada um com a sua própria característica. 

> Precisa entender mais?
>
> https://gmostofabd.github.io/8051-Push-Button/

Botões para operarem corretamente precisam ser energizados (fornecendo um valor quando apertado e outro quando solto), para facilitar essa conexão fabricantes de microcontrolor disponibilizam nos pinos um recurso chamado de `resistor de pull-up`, que fornecem energia a um pino, mesmo quando ele é configurado como `input`.

### Código

Para ativar o pull-up em um pino, use:

```c
gpio_pull_up(PIN);
```

## Tarefa

![diagram.png]

Modifique o código `main.c` para fazer a leitura de quantas vezes o botão conectado ao pino `GP26` foi apertado. Agora além de configurar o pino como entrada. Lembre que vocè deverá ativar o resistor de `pullup` no pino ligado ao botão.

### Cenário de teste

O teste pressiona o botão duas vezes, para cada vez pressionado você deve imprimir a mensagem: `Button pressed %d times \n` onde `%d` deve indicar a quantidade de vezes que o botão foi apertado. 

Resultado esperado:

``` c
Button pressed 1 times
Button pressed 2 times
```


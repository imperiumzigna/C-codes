
// Inclui o arquivo <"stdio.h">
// stdio.h é responsável pelas funções de entrada e saída.
#include <stdio.h>
#include <stdlib.h> 
// A função main() é obrigatória em todo programa C.
main(){
  // Declaração de variáveis.
  int a, b, c, i, n;
 
  // Aqui foi necessário atribuir valores as variáveis a e b.
  a = 0;
  b = 1;
 
  // A função printf() escreve na tela.
  printf("Digite um numero: ");
  // A função scanf obtém um valor digitado.
  scanf("%d", &n);
  printf("Serie de Fibonacci:\n");
  printf("%d\n", b);
 
  // Com a estrutura de controle for() gero a sequência.
  for(i = 0; i < n; i++)
  {
    c = a + b;
    a = b;
    b = c;
 
    // Imprimo o número na tela.
    printf("%d\n", c);
  }
  system("pause");
  }


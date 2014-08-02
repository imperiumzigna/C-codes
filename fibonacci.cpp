
// Inclui o arquivo <"stdio.h">
// stdio.h � respons�vel pelas fun��es de entrada e sa�da.
#include <stdio.h>
#include <stdlib.h> 
// A fun��o main() � obrigat�ria em todo programa C.
main(){
  // Declara��o de vari�veis.
  int a, b, c, i, n;
 
  // Aqui foi necess�rio atribuir valores as vari�veis a e b.
  a = 0;
  b = 1;
 
  // A fun��o printf() escreve na tela.
  printf("Digite um numero: ");
  // A fun��o scanf obt�m um valor digitado.
  scanf("%d", &n);
  printf("Serie de Fibonacci:\n");
  printf("%d\n", b);
 
  // Com a estrutura de controle for() gero a sequ�ncia.
  for(i = 0; i < n; i++)
  {
    c = a + b;
    a = b;
    b = c;
 
    // Imprimo o n�mero na tela.
    printf("%d\n", c);
  }
  system("pause");
  }


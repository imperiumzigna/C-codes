#include<stdlib>
#include<stdio.h>

int main()
{
int contador;

srandom(time(NULL)); /* iniciando o gerador de números aleatórios */
printf("Gerando 5 números aleatórios com random\n");
for(contador=1;contador <= 5; contador++)
printf("%d\n",random()/100000000);


printf("Gerando 5 números aleatórios com rand\n");
for(contador=1;contador <= 5; contador++)
printf("%d\n",rand()/100000000);

return(0);
}

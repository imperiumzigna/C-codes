#include<stdlib>
#include<stdio.h>

int main()
{
int contador;

srandom(time(NULL)); /* iniciando o gerador de n�meros aleat�rios */
printf("Gerando 5 n�meros aleat�rios com random\n");
for(contador=1;contador <= 5; contador++)
printf("%d\n",random()/100000000);


printf("Gerando 5 n�meros aleat�rios com rand\n");
for(contador=1;contador <= 5; contador++)
printf("%d\n",rand()/100000000);

return(0);
}

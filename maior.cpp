#include <stdio.h>
#include<stdlib.h>

main(){
       int valor,posicao,i,j;
       int vetor[10];
       for(i=0;i<=10;i++){
       printf("Digite 10 numeros:\n");
       scanf("%d",&vetor[10]);
       if(vetor[0]>vetor[i]){
                             printf("%dValor maior:\t",vetor[0]);
                             printf("%dPosicao:\t",i);
                             }
                             else
                             if(vetor[i]>vetor[0]){
                             printf("%dValor maior:\t",vetor[i]);
                             printf("%dPosicao:\t",i);
                                                   }
       }
       system("Pause");
       }
       

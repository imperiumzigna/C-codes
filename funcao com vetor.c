#include <stdio.h>
#include <stdlib.h>
int i;
int vetor[10];
maior(){

int numero,posicao;
numero=vetor[0];
posicao=0;

for (i=0;i<=10;i++){
        if(vetor[i]>numero){
            printf("\nO maior numero %d");
        }
}
 }
main() {

        for (i=0;i<=10;i++){
        printf("\nDigite valor de i: ");
        scanf("%d", &vetor[i]);
        }

        for(i=0;i<=10;i++){
        maior();
        }
system("pause");
}

#include <stdio.h>
#include <stdlib.h>

struct cad {
       char nome[30];
       int tel;
       char email[30];
       char end[20];
       };
       main(){
              system ("color 70");
              struct cad novo;
              printf("Digite seu nome:\n");
              scanf("%c",&novo.nome);
              printf("Digite seu telefone:\n");
              scanf("%d",&novo.tel);
              printf("Digite seu endereco:\n");
              scanf("%c",&novo.end);
              system("pause");
              }

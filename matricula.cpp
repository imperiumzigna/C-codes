#include<stdio.h>
#include<stdlib.h>

struct cad{
  int matricula;
  char nome[10];
  int celular;
  int endereco;
};

void criar(struct cad *valor){
     
     for(int i=0;i<=4;i++){
     printf("\ndigite o numero da matricula:\n");
     scanf("%d",&valor[i].matricula);
     printf("digite nome:\n");
     scanf("%s",&valor[i].nome);
     printf("digite celular:\n");
     scanf("%d",&valor[i].celular);
     printf("digite endereco:\n");
     scanf("%d",&valor[i].endereco);}
}
main (){
     struct cad multi[4];
     criar(multi);
     system("color 0F");
     system("cls");
     
     system("pause");
     }
        

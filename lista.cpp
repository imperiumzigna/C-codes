#include<stdio.h>
#include<stdlib.h>
#define MAX 7
#include <conio.h>
/*Programa de cadastro de cursos*/



/*Declaraão da lista*/
typedef struct lista{
  char nome[MAX];
   int matr;
   char curso[MAX];
      struct lista *prox;
}lista;
lista*cabeca=NULL;
//Função para imprimir todos os elementos da lista
lista*imprimir(){
    lista*aux = cabeca;
    int cont = 0;
    while (aux != NULL)
    {
        printf ("Matricula:%d\n",aux->matr);
        printf("Professor:");
        for(int i=0;i<MAX;i++){
        printf("%c",aux->nome[i]);}
        printf("Curso:");
        for(int i=0;i<MAX;i++){
        printf("%c",aux->curso[i]);
        }
        aux = aux->prox;
    }
   
}
// função de inserir um elemento na lista
lista*insere(){                 
   int matricula;
   char ncurso[MAX];
   char pcurso[MAX];                    
    lista*novo=cabeca;                

printf("Digite a matricula:");
scanf("%d",&matricula);
printf("Digite o nome do professor do curso:");
for(int i=0;i<MAX;i++){
scanf("%c",&ncurso[i]);}
printf("Digite o nome do curso:");
for(int i=0;i<MAX;i++){
scanf("%c",&pcurso[i]);}
if(cabeca==NULL){
                 cabeca=(lista*)malloc(sizeof(lista));
                 cabeca->prox=NULL;                 
                 cabeca->matr=matricula;
                 for(int i=0;i<MAX;i++){
                 cabeca->nome[i]=ncurso[i];
                 cabeca->curso[i]=pcurso[i];}                 
                 }
                 else{
                 novo = cabeca;
        cabeca = (lista*) malloc (sizeof(lista));
        cabeca->prox = novo;                
        cabeca->matr=matricula;
        for(int i=0;i<MAX;i++){
        cabeca->nome[i]=ncurso[i];
                 cabeca->curso[i]=pcurso[i];}
                 }
                 imprimir();        
}
//fim da inserção na lista                
       
main(){
       //menu
       system("color 03");
     int option;
     printf("\t\tCadastro de Cursos\n\n");
       printf("O que deseja fazer:\n");
       printf("Cadastrar um novo curso (1)\n");
       printf("Mostrar todos os cursos (2)\n");
       printf("\n\nEscolha uma opcao:\n");
       scanf("%d",&option);
       if(option==1){
                          insere();
                    }
                         else 
       if(option==2){
                          imprimir();
                          }
                          else
       if(option>2){
       printf("Opcao invalida\n");
                           
                          } 
       //fim do menu  
    
system("pause");
}

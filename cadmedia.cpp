#include<stdio.h>
#include<stdlib.h>

int op1,op2,op3;
float n1, n2;
float n3, n4;

struct cad {
       char nome[20];
       int matric[8];
       float nota1, nota2, nota3, nota4;
       };

float media(float n1,float n2,float n3,float n4){
     float m;
     m=(n1+n2+n3+n4)/4;
      printf("Sua media final e: %.2f\n",m);
      };
    
void fcad(struct cad *pont){
               for(int i=0;i<=3;i++){
               printf("Digite o numero da matricula\n");
               scanf("%d",&pont[i].matric);
                printf("Digite o nome do aluno:\n");
               scanf("%s",&pont[i].nome);
                printf("Digite a primeira nota:\n");
               scanf("%f",&pont[i].nota1);
               printf("Digite a segunda nota:\n");
               scanf("%f",&pont[i].nota2);
               printf("Digite a terceira nota:\n");
               scanf("%f",&pont[i].nota3);
               printf("Digite a quarta nota:\n");
               scanf("%f",&pont[i].nota4);
               printf("Deseja continuar a cadastrar alunos ou sair? Continuar [1]/ Sair[2]: ");
               scanf("%d",&op2);
               if(op2==1){
                          continue;
                          system("cls");}
               else{
                    printf("Entrada invalida...\n");
                    }                    
                          }
                          while(op2==2){
                              break;           }
                           
                          }

                          
                          
  main(){
     system("color 02");     
     struct cad aluno[3];        

           printf("O que deseja fazer:\n");
           printf("__________________________________________\n");
           printf("| cadastro [1]          |       media [2] \n");
           printf("|________________________________________|\n");
           printf("Digite sua opcao: ");
           scanf("%d",&op1);
           if(op1==1){
               fcad(aluno);                 
                   }
               else
               if(op1==2){
                          
                          printf("Digite a primeira nota:\n");
                          scanf("%f",&n1);
                          printf("Digite a segunda nota:\n");
                          scanf("%f",&n2);
                          printf("Digite a terceira nota:\n");
                          scanf("%f",&n3);
                          printf("Digite a quarta nota:\n");
                          scanf("%f",&n4);
                          media(n1,n2,n3,n4);
                          }
               else
               printf("Entrada invalida...\n");
                         system("pause");
}


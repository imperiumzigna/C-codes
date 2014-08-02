#include<stdio.h>
#include<stdlib.h>

float media (int n1,int n2, int n3, int n4){
      int m;
      m=(n1+n2+n3+n4)/4;
      return m;};
      
struct cad_aluno {
             int matricula;
             char nome[40];
             char endereco[40];
             float nota[4];};
            struct cad_aluno aluno; 
             main(){
                    int i,j;
                    
                    printf("Digite o nome do aluno.:\n");
                    scanf("%s",&aluno.nome);
                    printf("Digite o numero da matricula.:\n");
                    scanf("%d",&aluno.matricula);
                    printf("Digite o endereco.:\n");
                    scanf("%s",&aluno.endereco);
                    printf("Digite as quatro notas do aluno.:\n");
                    for(i=0;i<5;i++){
                                     scanf("%f",&aluno.nota[i]);
                                     }
                    system("pause");
                    }
                                     
             
             

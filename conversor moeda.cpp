#include <stdio.h>
#include <stdlib.h>
int option;
float dolar,real;
float cotacao;


float dolar_real(float cot, float valor){
      float result;      
      result=cot*valor;
      printf("O valor convertido e:\nR$ %.2f\n",result);
      }
      float euro_real(float cot, float valor){
      float result;      
      result=cot*valor;
      printf("O valor convertido e:\nR$ %.2f\n",result);
      }
      float dolar_euro(float cot, float valor){
      float result;      
      result=cot*valor;
      printf("O valor convertido e:\n€ %.2f\n",result);
      }
      
main(){
       
       float resf;
       printf("Que tipo de moeda voce deseja converter:\ndolar x real (1): \n euro x real (2): \ndolar x euro (3):\n ");
           scanf("%d",&option);
           if(option==1){
                         printf("Digite a cotacao do dolar e o valor em reais que voce deseja converter:\n");
                         scanf("%f %f",&cotacao,&real);
                         dolar_real(cotacao,real);
                         }
          else 
           if(option==2){
                         printf("Digite a cotacao do euro e o valor em reais que voce deseja converter:\n");
                         scanf("%f %f",&cotacao,&real);
                         euro_real(cotacao,real);
                         }
           else 
           if(option==3){
                        printf("Digite a cotacao do dolar e o valor em euros que voce deseja converter:\n");
                         scanf("%f %f",&cotacao,&real);
                         dolar_euro(cotacao,real);
                         }
                         printf("\nAutor: Igor\nhahahaha\n I love Maya\n");
                         system("pause");
                         }  
      
      

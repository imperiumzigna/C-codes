# include <stdio.h>
# include <stdlib.h>

int C[2][2],i,j;


main (){
     system ("color 70");
     printf ("Digite numeros:\n");
     //escaneia a a matriz
     for ( int i=0;i<2;i++)
     {
         for (int j=0;j<2;j++)
         {
     scanf("%d\n",&C[i][j]);
          }
     }
     //escreve o que foi digitado
     for ( int i=0;i<2;i++)
     {
       for (int j=0;j<2;j++)
       {
           printf("%d\n",C[i][j]);
           }  
             
     }
       system ("pause");
       return 0;
         }

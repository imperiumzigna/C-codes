# include <stdio.h>
# include <stdlib.h>

int A[6];
int i;
int j=i+1;
main (){
     printf ("Digite 6 numeros:\n");
     for ( int i=0;i<6;i++)
     {
     scanf("%d\n",&A[i]);
     }
      for ( int i=0;i<6;i++)
     {
          for (int j=0;j<6;j++){
              if(A[i]>A[j]){
      printf("%d\n",A[i]);
      }
      else
      printf("%d\n",A[j]);
      }
       system ("pause");
       return 0;
         }
         }
         

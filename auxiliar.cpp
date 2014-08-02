#include <stdio.h>
#include <stdlib.h>

int VerificaseSimetrica ( int *v, int n, int m){
  int i,j,aux,g,l,flag=0,k;
  for(i=0;i<m;i++){
       for(j=0;j<n;j++){
             printf("digite a%d%d  ",i,j);           
             scanf("%d",&aux);
             k=i*n+j;
             v[k]=aux; 
       }
  }
  for(i=0;i<m;i++){
       for(j=0;j<n;j++){
             l=j*n+i;
             g=i*n+j;
             if(v[l]!=v[g]){
               flag=1;
               break;
             }
       }
       if(flag==1)
         break;
  }
  if (flag==0)
     return 1;
  else
     return 0;   
}

int main(){
    int m,n,r,*p;
    printf("digite a qntd de linha\n");
    scanf("%d",&m);
    printf("digite a qntd de coluna\n");
    scanf("%d",&n);
    p=(int*)calloc(sizeof(int),n*m);
    r=VerificaseSimetrica(p,m,n);
    if(r==1)
    printf("matriz simetrica\n");
    if(r==0)
    printf("matriz naum eh simetrica\n");
    system("pause");
    return 0;
    
}

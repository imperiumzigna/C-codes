#include<stdio.h>
#include<stdlib.h>
#define max 100

//variáveis
int i,linhas,colunas;
int j,k,n;
int mat1[max][max];
int mat2[max][max];
int mat3[max][max];
int vet[10];
//struct
struct cadastro{
char nome[max];
char end[max];
int tel;
};
//protótipo
void armazena();
//função passagem de parâmetro por referência
void referencia(int *pvet){
for(i=0;i<=10;i++){
printf("Digite 10 numeros:\n");
scanf("%d",&pvet[i]);
printf("O numero da posicao %d e:%d\n",i,pvet[i]);
}
}
//função vetor de record
void vetrec(){
 struct cadastro cad[max];
int i,n;
printf("Digite o numero de cadastros desejado: ");
scanf("%d",&n);
for(i=0;i<n;i++){
printf("\nDigite seu nome:\n");
scanf("%s",&cad[i].nome);
printf("\nDigite endereco:\n");
scanf("%s",&cad[i].end);
printf("\nDigite telefone:\n");
scanf("%s",&cad[i].tel);
printf("\n\nCadastro efetuado com sucesso...\n");
}
}
 //produto de matrizes
 void matprod(){
printf("Digite o numero de linhas que sua matriz tera:"); 
 scanf("%d",&linhas);
 printf("Digite o numero de colunas que sua matriz tera:");
 scanf("%d",&colunas);
 if(linhas!=colunas){
 printf("As matrizes deve ser o mesmo numero de linhas e colunas...\n");
 }
 else
 if(linhas==colunas){
  
  for(i=0;i<linhas;i++){
 for(j=0;j<colunas;j++){
 printf("Digite um valor para [%d][%d] da primeira matriz:",(i+1),(j+1));
  scanf("%d",&mat1[i][j]);
   }
 }
 
 for(i=0;i<linhas;i++){
 for(j=0;j<colunas;j++){
  printf("Digite um valor para [%d][%d] da segunda matriz:",(i+1),(j+1));
  scanf("%d",&mat2[i][j]);
 }
 }
 printf("O produto das matrizes sera:\n");
 for(i=0;i<linhas;i++){
 for(j=0;j<colunas;j++){
                         
 mat3[i][j]=(mat1[i][j])*(mat2[i][j]);
printf("%d\n",mat3[i][j]); 
}
  }
}
 }
 //recursividade
 void chama_fat(){
 int n;
    printf("Digite um inteiro positivo: ");
    scanf("%d", &n);

    printf("O fatorial de %d sera: %d\n", n, fatorial(n));
	}
int fatorial(int n){
    if(n == 1)
        return 1;
    else
        return ( n * fatorial(n-1) );
}
	
 //matriz simetrica
 void simetrica(){
 int i, j, m[max][max];
 printf("Digite a dimensao da matriz:");
 scanf("%d",&n);
 for (i=0; i<n; i++) {
    printf("Informe o elemento da  linha %d:\n", (i+1));
    for (j=0; j<n; j++) {
      printf("m[%d][%d] = ", i, j);
      scanf("%d", &m[i][j]);
    }
    printf("\n");
  }
 int verifica = 1;
  for (i=0; (i<n)&&(verifica==1); i++) {
    for (j=0; (j<i)&&(verifica==1); j++) {
	if (m[i][j] != m[j][i])
         verifica = 0;
    }
  }
  printf("\n");
  for (i=0; i<n; i++) {
    printf("%da.linha: ", (i+1));
    for (j=0; j<n; j++) {
      printf("%d ", m[i][j]);
    }
    printf("\n");
  }

  if (verifica == 1){
     printf("\nA matriz informada e uma matriz simetrica.\n");}
  else {
  printf("\nA matriz informada nao e uma matriz simetrica.\n");}
}
 //menu principal
void menu(){    
int option;
printf("Escolha uma das seguintes opcoes:\n");
printf("Vetor de record (1)\n");
printf("Produto de Matrizes (2)\n");
printf("Recursividade (3)\n");
printf("Passagem de parametro por valor (4)\n");
printf("Passagem de parametro por referencia (5)\n");
printf("Matriz simetrica (6)\n");
printf("\n\nDigite sua opcao:");
scanf("%d",&option);
if(option==1){
vetrec();
}
else
if(option==2){
matprod();
}
else 
if(option==3){
chama_fat();
}
else
if(option==4){
armazena();
}
else
if(option==5){
referencia(vet);
}
else
if(option==6){
simetrica();}
else {
printf("Opcao invalida");
system("cls");

}
}
//passagem de parâmetro por valor
void troca(int a,int b){
int aux;
aux=a;
a=b;
b=aux;

}
void armazena(){
int a=5,b=1;
        printf("Antes de chamar a funcao:\na=%d\nb=%d\n",a,b);
        troca(a,b);
        printf("Depois de chamar a funcaoo:\na=%d\nb=%d\n",a,b);

}
//main
main(){
  menu();     
 
system("\npause");
}

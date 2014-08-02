#include<stdio.h>
#include<stdlib.h>

//�rvore Bin�ria


/*Defini��o da �rvore bin�ria(cada n� pode ter no m�ximo 2 filhos). A �rvore n�o est� criada, ela est� apenas definida*/
typedef struct arv{ //Essa struct arv, foi renomeada arvore
        char nfolha;//conte�do de cada n� da �rvore, pode ser apenas um ou mais, do mesmo tipo ou n�o...
        struct arv *r_esquerda; //ponteiro para o n� esquerdo da �rvore...
        struct arv *r_direita;  //ponteiro para o n� direito da �rvore...
        }arvore;//novo nome da �rvore
 /*Fun��o para inicializar a �rvore vazia, ela serve tamb�m para auxiliar na hora de criar a �rvore, praticamente
 todas as �rvores */       
        arvore*inicializa(){
                            return NULL;
                            }
/*Criando realmente a �rvore, atrav�s de uma fun��o*/       
        arvore*cria(char nme, arvore*sae,arvore*sad)/*Essa fun��o receber� o char que foi 
        declarado na hora que foi definida a �rvore e os dois filhos da �rvore*/
        {                        
                         arvore*nova=(arvore*)malloc(sizeof(arvore));/*aloca��o din�mica do n� da �rvore, 
                         agora chamada de "nova" que � um ponteiro para a estrutura da �rvore definida*/
                         nova->nfolha=nme;/*a vari�vel "nme" vai receber o ponteiro nova que est� apontando para um dos campos da struct*/
                         nova->r_esquerda=sae;/*a vari�vel "sae" vai receber o ponteiro nova apontando para o n� esquerdo*/
                         nova->r_direita=sad;/*a vari�vel "sad" vai receber o ponteiro nova apontando para o n� direito*/
                         return nova;/*depois de criada a fun��o retornar� "nova" que foi alocada dinamicamente*/
                         }
                         
        int vazia(arvore*a)/*Fun��o para testar se a �rvore est� vazia. 
        � muito �til quando formos aplicar uma busca na �rvore, e devemos saber se um n� est� vazio ou n�o para avan�ar ao pr�ximo*/
        {
            return a==NULL;
            }
        
                         void imprime(arvore*a)/*Fun��o a imprimir a �rvore, que receber� um ponteiro para a �rvore...*/
                         {
                              /*Antes de imprimir a �rvore � preciso test�-la, para saber se est� vazia ou n�o, 
                              utilizando um condicional para chamar a fun��o que testa se ela � vazia*/
                              if(!/*operador l�gico de nega��o "!"(para quem n�o lembrava...)*/vazia(a))
                              {
                                   printf("Conteudo da arvore: %c\n",a->nfolha);/*para imprimir, deve-se utilizar 
                                   o ponteiro criado no in�cio da fun��o, apontando para o campo "da struct", 
                                   n�o o campo que foi recebido na hora de criar a �rvore*/
                                   imprime(a->r_esquerda);/*chamada recursiva para imprimir o conte�do do n� esquerdo*/
                                   imprime(a->r_direita);/*chamada recursiva para imprimir o conte�do do n� direito*/
                                   }                                                              
                                   }
                                   
         arvore*liberar(arvore*a)/*Fun��o para liberar uma �rvore, essa fun��o recebe o ponteiro "a" que aponta(redundante) para a �rvore*/
         {
                                  if(!vazia(a))/*antes de liberar uma �rvore, � preciso testar se ela est� vazia, 
                                  � mesma maneira na hora de imprim�-la. Se a �rvore n�o for vazia ent�o a �rvore poder� ser "liberada"*/
                                  {
                                          /*chamadas recursivas da fun��o, porque assim cada n� ser� testado "vazio ou n�o vazio", 
                                          antes de liberar a mem�ria alocada...*/ 
                                                liberar(a->r_esquerda);
                                                liberar(a->r_direita);
                                                free(a);
                                  }
                                                return NULL;
                                                }
main(){
       /*Declarando um ponteiro para a �rvore que receber� a fun��o "cria()"*/
       arvore*a=cria('s',cria('o',cria('u',inicializa(),inicializa())/*Se for colocado um elemento no primeiro campo, 
       ele ser� o nome do n�. Se chamarmos recursivamente a fun��o cria(), nos outros campos, estaremos criando um n� a esquerda ou a direita, 
       depender� de sua organiza��o.*/ 
       ,inicializa()),cria('f',
       cria('o',cria('d',cria('a',inicializa(),inicializa()),
       inicializa()),inicializa()),inicializa()));/*Caso a fun��o possua apenas um n� e dois filhos, nos dois campos finais ela
       chamar� a fun��o inicializa() que retorna vazio...*/
       imprime(a);//imprimir "a", a raiz da �rvore
       liberar(a);//liberar mem�ria alocada
       system("\npause");
       }                          
//Observa��es:
  /*1-   Caso esteja trabalho com vari�veis do tipo char sem definir um vetor, 
              n�o use "aspas duplas" pois o compilador reconhecer� como erro*/
  /*2-   A fun��o criar,inicializa e liberar, podem servir tanto para adicionar itens a �rvore, 
  excluir folhas ou n�o adicionar mais n�s */            
  /*3-   Quando se liberar a mem�ria de uma �rvore, deve-se liberar cada n� por vez, 
  para evitar perder n�s que ainda ser�o utilizados, ou seja "cuidado"... */            

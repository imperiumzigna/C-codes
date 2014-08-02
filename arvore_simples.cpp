#include<stdio.h>
#include<stdlib.h>

//Árvore Binária


/*Definição da árvore binária(cada nó pode ter no máximo 2 filhos). A árvore não está criada, ela está apenas definida*/
typedef struct arv{ //Essa struct arv, foi renomeada arvore
        char nfolha;//conteúdo de cada nó da árvore, pode ser apenas um ou mais, do mesmo tipo ou não...
        struct arv *r_esquerda; //ponteiro para o nó esquerdo da árvore...
        struct arv *r_direita;  //ponteiro para o nó direito da árvore...
        }arvore;//novo nome da árvore
 /*Função para inicializar a árvore vazia, ela serve também para auxiliar na hora de criar a árvore, praticamente
 todas as árvores */       
        arvore*inicializa(){
                            return NULL;
                            }
/*Criando realmente a árvore, através de uma função*/       
        arvore*cria(char nme, arvore*sae,arvore*sad)/*Essa função receberá o char que foi 
        declarado na hora que foi definida a árvore e os dois filhos da árvore*/
        {                        
                         arvore*nova=(arvore*)malloc(sizeof(arvore));/*alocação dinâmica do nó da árvore, 
                         agora chamada de "nova" que é um ponteiro para a estrutura da árvore definida*/
                         nova->nfolha=nme;/*a variável "nme" vai receber o ponteiro nova que está apontando para um dos campos da struct*/
                         nova->r_esquerda=sae;/*a variável "sae" vai receber o ponteiro nova apontando para o nó esquerdo*/
                         nova->r_direita=sad;/*a variável "sad" vai receber o ponteiro nova apontando para o nó direito*/
                         return nova;/*depois de criada a função retornará "nova" que foi alocada dinamicamente*/
                         }
                         
        int vazia(arvore*a)/*Função para testar se a árvore está vazia. 
        É muito útil quando formos aplicar uma busca na árvore, e devemos saber se um nó está vazio ou não para avançar ao próximo*/
        {
            return a==NULL;
            }
        
                         void imprime(arvore*a)/*Função a imprimir a árvore, que receberá um ponteiro para a árvore...*/
                         {
                              /*Antes de imprimir a árvore é preciso testá-la, para saber se está vazia ou não, 
                              utilizando um condicional para chamar a função que testa se ela é vazia*/
                              if(!/*operador lógico de negação "!"(para quem não lembrava...)*/vazia(a))
                              {
                                   printf("Conteudo da arvore: %c\n",a->nfolha);/*para imprimir, deve-se utilizar 
                                   o ponteiro criado no início da função, apontando para o campo "da struct", 
                                   não o campo que foi recebido na hora de criar a árvore*/
                                   imprime(a->r_esquerda);/*chamada recursiva para imprimir o conteúdo do nó esquerdo*/
                                   imprime(a->r_direita);/*chamada recursiva para imprimir o conteúdo do nó direito*/
                                   }                                                              
                                   }
                                   
         arvore*liberar(arvore*a)/*Função para liberar uma árvore, essa função recebe o ponteiro "a" que aponta(redundante) para a árvore*/
         {
                                  if(!vazia(a))/*antes de liberar uma árvore, é preciso testar se ela está vazia, 
                                  à mesma maneira na hora de imprimí-la. Se a árvore não for vazia então a árvore poderá ser "liberada"*/
                                  {
                                          /*chamadas recursivas da função, porque assim cada nó será testado "vazio ou não vazio", 
                                          antes de liberar a memória alocada...*/ 
                                                liberar(a->r_esquerda);
                                                liberar(a->r_direita);
                                                free(a);
                                  }
                                                return NULL;
                                                }
main(){
       /*Declarando um ponteiro para a árvore que receberá a função "cria()"*/
       arvore*a=cria('s',cria('o',cria('u',inicializa(),inicializa())/*Se for colocado um elemento no primeiro campo, 
       ele será o nome do nó. Se chamarmos recursivamente a função cria(), nos outros campos, estaremos criando um nó a esquerda ou a direita, 
       dependerá de sua organização.*/ 
       ,inicializa()),cria('f',
       cria('o',cria('d',cria('a',inicializa(),inicializa()),
       inicializa()),inicializa()),inicializa()));/*Caso a função possua apenas um nó e dois filhos, nos dois campos finais ela
       chamará a função inicializa() que retorna vazio...*/
       imprime(a);//imprimir "a", a raiz da árvore
       liberar(a);//liberar memória alocada
       system("\npause");
       }                          
//Observações:
  /*1-   Caso esteja trabalho com variáveis do tipo char sem definir um vetor, 
              não use "aspas duplas" pois o compilador reconhecerá como erro*/
  /*2-   A função criar,inicializa e liberar, podem servir tanto para adicionar itens a árvore, 
  excluir folhas ou não adicionar mais nós */            
  /*3-   Quando se liberar a memória de uma árvore, deve-se liberar cada nó por vez, 
  para evitar perder nós que ainda serão utilizados, ou seja "cuidado"... */            

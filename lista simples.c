#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct lista
{
    int num;
    struct lista *prox;
}Lista;

Lista *cabeca = NULL;
void inserir_fim();
void somar_tudo();
void remover_fim();
void remover_inicio();
void remover_qualquer();
void menu();
void inserir_inicio();
void buscar_elemento();
void imprimir_tudo();
int main()
{
    while (1)
        menu();

   return 0;
}

void menu()
{
    int op = -1;

    printf (" ------ Menu Principal ------\n");
    printf ("\n1. Inserir no inicio");
    printf ("\n2. Inserir no final");
    printf ("\n3. Remover do inicio");
    printf ("\n4. Remover do final");
    printf ("\n5. Remover elemento");
    printf ("\n6. Buscar elemento");
    printf ("\n7. Imprimir tudo");
    printf ("\n8. Somar todos");
    printf ("\n\n\tOpcao: ");
    scanf ("%d", &op);

   if (op == 1)
        inserir_inicio();
   else if (op == 2)
        inserir_fim();
   else if (op == 3)
        remover_inicio();
   else if (op == 4)
        remover_fim();
   else if (op == 5)
        remover_qualquer();
   else if (op == 6)
        buscar_elemento();
   else if (op == 7)
        imprimir_tudo();
   else if (op == 8)
        somar_tudo();
    system ("cls");
}

void inserir_inicio()
{
    int numero;
    Lista *aux = cabeca;
    printf ("Entre com um numero: ");
    scanf ("%d", &numero);
    
    if (cabeca == NULL)
    {//A lista esta vazia
        cabeca = (Lista*) malloc (sizeof(Lista));
        cabeca->prox = NULL;
        cabeca->num = numero;
    }
    else
    {//entao a lista não esta vazia
        aux = cabeca;
        cabeca = (Lista*) malloc (sizeof(Lista));
        cabeca->prox = aux;
        cabeca->num = numero;
    }
}

void inserir_fim(){
    Lista *aux = cabeca;
    int numero;

    printf ("Entre com um numero: ");
    scanf ("%d", &numero);


    if (cabeca== NULL)
    {//lista vazia
        cabeca = (Lista*) malloc(sizeof (char));
        cabeca->prox = NULL;
        cabeca->num = numero;
    }
    else
    {//lista possui alguma coisa
        while (aux->prox != NULL)
            aux = aux->prox;
        aux->prox = (Lista*) malloc (sizeof (Lista));
        aux = aux->prox;
        aux->num = numero;
        aux->prox = NULL;
    }

}

void buscar_elemento(){
    Lista *aux = cabeca;
    int cont= 0;
    int numero;

    printf ("\nEntre com um valor: ");
    scanf ("%d", &numero);

    while (aux != NULL && aux->num != numero)
    {
        cont ++;
        aux = aux->prox;
    }

    if (cont != 0 || aux != NULL)
        printf ("\nO indice do termo eh: %d", cont + 1);
    else
        printf ("\nTermo nao encontrado!");

   getch();
}

void imprimir_tudo(){
    Lista *aux = cabeca;
    int cont = 0;
    while (aux != NULL)
    {
        cont ++;
        printf ("\n[%d] %d",cont,aux->num);
        aux = aux->prox;
    }
   getch();
}

void remover_inicio()
{
    Lista *aux = cabeca;

    if (aux != NULL)
        cabeca = aux->prox;
    printf ("Primeiro termo apagado! Valor: %d", aux->num);
    getch();
}

void remover_fim()
{
    Lista *aux = cabeca;
    Lista *aux2;

    while (aux->prox != NULL)
    {
        aux2 = aux;
        aux = aux->prox;
    }
    aux2->prox = NULL;
    printf ("\nUltimo valor removido! Valor: %d", aux->num);
}

void remover_qualquer()
{
    Lista *auxAnterior = NULL;
    Lista *aux = cabeca;
    int numero;

    printf ("Entre com um valor a ser removido: ");
    scanf ("%d", &numero);

    while (aux != NULL && aux->num != numero)
    {
        auxAnterior = aux;
        aux = aux->prox;
    }

    if (auxAnterior == NULL)
    {
        remover_inicio();
    }
    else if (aux != NULL)
    {
        auxAnterior->prox = aux->prox;
        printf ("\nNumero removido com sucesso! %d", aux->num);
    }
    else
        printf ("\nErro: numero nao encontrado!\nCertifique-se de ter entrado com o numero correto.");

    getch();
}

void somar_tudo()
{
    Lista *aux = cabeca;
    int soma = 0;

    while (aux != NULL)
    {
        soma += aux->num;
        aux = aux->prox;
    }
    printf ("\nA soma de todos os termos eh: %d", soma);
    getch();
}

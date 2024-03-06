#include <stdio.h>
#include <stdlib.h>

typedef struct no{
  int valor;
  struct no *proximo;
}No;



void inserir_no_inicio(No **lista, int num) {
  No *novo = malloc(sizeof(No));

if (novo){
    novo->valor = num;
    novo->proximo = *lista;
    *lista = novo;

    }
else{
    printf("Nao foi possivel alocar a memoria");
  }
}


void inserir_no_meio(No **lista,int num, int ant) {
 No *aux, *novo = malloc(sizeof(No));


 if (novo){
    novo->valor = num;
    if (*lista == NULL) {
        novo->proximo = *lista;
        *lista = novo;

    }
    else {
        aux = *lista;
        while(aux->valor != ant && aux->proximo){
            aux = aux->proximo;
          }

        novo->proximo = aux->proximo;
        aux->proximo = novo;
    }

 }
 else{
    printf("Erro de alocar memoria ");
 }


}

void inserir_no_final(No **lista,int num) {
  No *aux, *novo = malloc(sizeof(No));

  if (novo){
    novo->valor = num;
    novo->proximo = NULL;

    if (*lista == NULL) {
        *lista = novo;
    }
    else {
        aux = *lista;
        while (aux->proximo){
            aux = aux->proximo;
        }
        aux->proximo = novo;
    }

 }
 else{
    printf("Erro de alocar memoria ");
 }

}

void inserir_ordenado(No **lista,int num) {
 No *aux, *novo = malloc(sizeof(No));


 if (novo){
    novo->valor = num;
    if (*lista == NULL) {
        novo->proximo = *lista;
        *lista = novo;

    }
    else if(novo->valor < (*lista)->valor){
        novo->proximo = *lista;
        *lista = novo;
        
        
    }
    else {
        aux = *lista;
        while(aux->proximo && novo->valor > aux->proximo->valor){
            aux = aux->proximo;
          }

        novo->proximo = aux->proximo;
        aux->proximo = novo;
    }

 }
 else{
    printf("Erro de alocar memoria ");
 }


}

void imprimir(No *no){
    printf("\n\tLista: ");
    while (no) {

        printf("%d ", no->valor);
        no = no ->proximo;
    }
    printf("\n\n");


}

void clearConsole() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

void wait(int milliseconds) {
    #ifdef _WIN32
        Sleep(milliseconds);
    #else
        usleep(milliseconds * 1000);
    #endif
}


int main()
{
    int opcao, valor,anterior;
    No *lista = NULL;

    do{
    wait(2000);
    printf("\n\t     Menu\n0 - Sair\n1 - Inserir\n2 - InserirF\n3 - InserirM\n4 - Imprimir\n5 - Inserir Ordenado\n6 - Limpar console\n\n");
    scanf("%d", &opcao);

    switch(opcao) {

    case 1 :
        printf("\nInsira o valor que deseja inserir: ");
        scanf("%d",&valor);
        inserir_no_inicio(&lista,valor);
        break;

    case 2:
        printf("\nInsira o valor que deseja inserir: ");
        scanf("%d",&valor);
        inserir_no_final(&lista,valor);
        break;

    case 3:
        printf("\nInsira o valor que deseja inserir e a referencia: ");
        scanf("%d%d",&valor,&anterior);
        inserir_no_meio(&lista,valor,anterior);
        break;

    case 4:
        printf("\nImprimindo \n\n");
        imprimir(lista);
        break;
    
    case 5:
        printf("\nInsira o valor que deseja inserir: ");
        scanf("%d",&valor);
        inserir_ordenado(&lista,valor);
        break;

    case 6:
        printf("\nLimpando \n\n");
        wait(2000);
        clearConsole();
        break;

    default:
        if (opcao != 0){
            printf("\nOpcao Invalida\n\n");
        }
        else {
            printf("\n\nFim do Programa. \n\n\n");
        }
        break;

        }


    }while(opcao != 0);

    return 0;


}

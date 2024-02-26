#include <stdio.h>
#include <stdlib.h>

struct meusmodelos {

    char modelo[20];
    int idade;
    float valor;

};

int main()
{
    int valorcentral = 0;

    printf("Quantos carros deseja cadastrar? : ");
    scanf("%d",&valorcentral);

    printf("\n\n");

    struct meusmodelos vetorModelos[valorcentral];

    for (int i=0; i< valorcentral; i++){

        printf("Insira o modelo do carro %d : ",i+1);
        scanf("%s",&vetorModelos[i].modelo);

        printf("\nInsira o ano do carro : ");
        scanf("%d",&vetorModelos[i].idade);

        printf("\nInsira o valor do carro R$: ");
        scanf("%f",&vetorModelos[i].valor);

        printf("\n");
    }
    
    system("clear");

    printf("\n\n----Relatorio----\n\n");

    printf("Quantidade de Carros cadastrados: %d", valorcentral);

    printf("\n Ano dos carros: ");

    for (int e = 0; e < valorcentral; e++) {
        printf("\n");
        printf("%d° : %d",e+1,vetorModelos[e].idade);

    }

    float total = 0;

    for (int j = 0; j < valorcentral; j++) {
        float soma = vetorModelos[j].valor;
        total = soma + total;
    }

    float media = total/valorcentral;

    printf("\n\na Soma deu um total de : %f",total);

    printf("\nMedia de valores: %.2f",media);


}


#include <stdio.h>
#include <stdlib.h>

struct dados {

    int codigo;
    int idade;
    float salario;

};

int main()
{


    struct dados vetorDados[2];

    for (int i=0; i< 2; i++){

        printf("Insira o codigo do usuario %d : ",i+1);
        scanf("%d",&vetorDados[i].codigo);

        printf("\nInsira a idade do funcionario : ");
        scanf("%d",&vetorDados[i].idade);

        printf("\nInsira o valor do salario R$: ");
        scanf("%f",&vetorDados[i].salario);

        printf("\n");

    }

    int consulta;

    printf("Insira o codigo de consulta do usuario : ");
    scanf("%d",&consulta);

    int consulta2 = 0;

    for (int i=0; i< 2; i++){
     if (consulta == vetorDados[i].codigo) {

        printf("\nOs dados cadastrados foram encontrados\n\n");

        printf("Codigo : %d\n",vetorDados[i].codigo);

        printf("Idade : %d\n",vetorDados[i].idade);

        printf("Salario : %.2f\n\n",vetorDados[i].salario);

        consulta2 = 1;

     }

    }

    if (consulta2 == 0) {

        printf("\nCadastro nao encontrado\n");
    }



}


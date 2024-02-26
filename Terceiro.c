#include <stdio.h>
#include <stdlib.h>

struct dados {

    int codigo;
    int idade;
    float salario;

};

int main()
{


    struct dados vetorDados[5];

    for (int i=0; i< 5; i++){

        printf("Insira o codigo do usuario %d : ",i+1);
        scanf("%d",&vetorDados[i].codigo);

        printf("\nInsira a idade do funcionario : ");
        scanf("%d",&vetorDados[i].idade);

        printf("\nInsira o valor do salario R$: ");
        scanf("%f",&vetorDados[i].salario);

        printf("\n");

    }

    int consulta;
    int opcao;

    printf("1 - Exibir Clientes\n2 - Consultar Cliente\n3 - Sair do programa\n\n");
    scanf("%d",&opcao);


    if (opcao == 1) {
        for (int i=0; i< 5; i++){
          printf("\nCodigo : %d\n",vetorDados[i].codigo);

          printf("Idade : %d\n",vetorDados[i].idade);

          printf("Salario : %.2f\n",vetorDados[i].salario);

        }

    }


    else if (opcao == 2){

       printf("Insira o codigo do cliente : ");
       scanf("%d",&consulta);

       int consulta2 = 0;

       for (int i=0; i< 5; i++){
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

    else {

        printf("\nSaiu do programa");
        return 0;
    }





}

#include <stdio.h>
#include <stdlib.h>

struct pesos {

  float altura;
  float peso;
  float imc;
};

int main()
{
  struct pesos medidas[2];

  for (int i = 0; i <2; i++){

    printf("Insira o peso : ");
    scanf("%f",&medidas[i].peso);

    printf("\nInsira a altura : ");
    scanf("%f",&medidas[i].altura);

    medidas[i].imc = (float) medidas[i].peso / (medidas[i].altura*medidas[i].altura);

    printf("\no seu IMC e de : %.2f\n\n",medidas[i].imc);

    if (medidas[i].imc > 18.5 && medidas[i].imc < 25){

        printf("Peso Ideal\n\n");
    }

    else if (medidas[i].imc < 18.5){

        printf("Voce esta abaixo do peso ideal\n\n");
    }

    else if (medidas[i].imc > 25){

        printf("Voce esta acima do peso ideal\n\n");
    }

  }



}

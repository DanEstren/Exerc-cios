#include <stdio.h>
#include <stdlib.h>

struct faculdade {

    int codigo;
    int vagas;
    int candidatosm;
    int candidatosf;


};

int main()
{

    struct faculdade cursos[5];

    for (int i =0; i < 5;i++){

        printf("Insira o Codigo : ");
        scanf("%d",&cursos[i].codigo);
        printf("\nInsira a quantidade de Vagas : ");
        scanf("%d",&cursos[i].vagas);
        printf("\nCandidatos Masculinos : ");
        scanf("%d",&cursos[i].candidatosm);
        printf("\nCandidatos Femininos  : ");
        scanf("%d",&cursos[i].candidatosf);

        float candpvaga = (float)(cursos[i].candidatosm + cursos[i].candidatosf) / cursos[i].vagas;

        printf("\nCandidato por Vaga : %.2f\n\n",candpvaga);

    }

    int codigos;
    printf("\nInsira o codigo do curso desejado para consultar as vagas: ");
    scanf("%d",&codigos);

    int confirm = 0;

    for (int e =0; e < 5;e++){

        if (codigos == cursos[e].codigo){

          printf("\nVagas : %d",cursos[e].vagas);

          float candpvaga2 = (float)(cursos[e].candidatosm + cursos[e].candidatosf) / cursos[e].vagas;

          printf("\nCandidato por Vaga : %.2f",candpvaga2);

          printf("\nCodigo : %d\n",cursos[e].codigo);

          confirm = 1;

        }


    }
    if (confirm == 0){
        printf("\nCurso Inexistente");

        return 0;

    }

}

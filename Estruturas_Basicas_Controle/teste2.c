#include <stdio.h>

int main(){

    int numeroInteiro;
    float numeroQuebrado;

    printf("Digite um número inteiro: \n");
    scanf("%d", &numeroInteiro);
    printf("Digite um número quebrado: \n");
    scanf("%f", &numeroQuebrado);

    printf("O número inteiro digitado foi %d e o número quebrado digitado foi %.2f. \n", numeroInteiro, numeroQuebrado);

    return 0;

}

#include <stdio.h>

int main(){
    int vetor[2][3], soma = 0;

    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            printf("Agencia %d, Dia %d: ", i + 1, j + 1);
            scanf("%d",&vetor[i][j]);
            soma += vetor[i][j];
        }
    }

    printf("O valor total é: %d\n\n", soma);

    return 0;
}

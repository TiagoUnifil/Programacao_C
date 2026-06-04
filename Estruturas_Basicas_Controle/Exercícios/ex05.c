/*5 - Diferença de Salários entre Jogadores
Peça ao usuário os salários de dois jogadores de
futebol e mostre a diferença entre eles.*/

#include <stdio.h>

int main(){
    //Declaração das variáveis
    char nome1[50], nome2[50];
    float salario1, salario2, dif;

    printf("Digite o nome do jogador 1 e seu respectivo salário: ");
    scanf("%s", nome1);
    scanf("%f", &salario1);

    printf("Digite o nome do jogador 2 e seu respectivo salário: ");
    scanf("%s", nome2);
    scanf("%f", &salario2);

    dif = salario1 - salario2;

    printf("A diferença entre o salário de %s e %s é %.2f ", nome1, nome2, dif);

    return 0;
}

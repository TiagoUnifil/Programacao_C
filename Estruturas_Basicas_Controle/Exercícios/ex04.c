/*4 - Calculando o Aproveitamento de um Time
Crie um programa que peça o número de vitórias,
empates e derrotas de um time.
Depois, calcule o número total de pontos,
seguindo a regra:

Vitória = 3 pontos

Empate = 1 ponto

Derrota = 0 pontos */

#include <stdio.h>

int main(){
    //Declaração das variáveis
    int vitoria, empate, derrota;
    int pontos, jogo;

    printf("Digite o número de vitórias:\n");
    scanf("%d", &vitoria);
    printf("Digite o numero de empates: \n");
    scanf("%d", &empate);
    printf("Digite o numero de derrotas: \n");
    scanf("%d", &derrota);

    jogo = (vitoria + empate + derrota);
    pontos = (3*vitoria + 1*empate + 0*derrota);

    printf("O time conseguiu %d pontos em %d jogos no campeonato.", pontos, jogo);

    return 0;
}

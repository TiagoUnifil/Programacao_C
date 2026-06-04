/*2 - Média de Gols por Partida
Escreva um programa que receba o número total de gols
de um jogador e a quantidade de partidas jogadas.
Depois, calcule e exiba a média de gols por partida.*/

#include <stdio.h>

int main(){

    //declaração das variáveis
    int numero, quantidade;
    float media;

    printf("Digite o número total de gols realizados: \n");
    scanf("%d", &numero);
    printf("Digite a quantidade de partidas jogadas: \n");
    scanf("%d", &quantidade);

    media = (float)numero / quantidade; //temos que fazer o cast aqui!!

    printf("A média de gols por partida é: %.2f ", media);

    return 0;
}

/*3 - Conversão de Minutos para Tempo de Jogo
Peça ao usuário para digitar o tempo jogado em minutos.
Depois, converta esse valor para horas e minutos e exiba
o resultado.*/

#include <stdio.h>

int main(){
    //Declaração das variáveis
    int tempoMinutos;
    int tempoHoras;
    int restoMinutos;
    //Entrada dos dados
    printf("Digite o tempo do jogo em minutos: \n");
    scanf("%d", &tempoMinutos);

    //Transformação do tempo
    tempoHoras = tempoMinutos / 60;
    restoMinutos = tempoMinutos % 60;


    printf("O tempo do jogo foi %d hora(s) e %d minuto(s). ", tempoHoras, restoMinutos);

    return 0;
}

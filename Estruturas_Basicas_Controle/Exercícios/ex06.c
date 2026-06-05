/*6 - Verificação de Cartão Vermelho
Um jogador recebe cartão vermelho se receber 2 cartões
amarelos no jogo. Escreva um programa que verifica se
um jogador será expulso, baseado na quantidade de
cartões amarelos. */

#include <stdio.h>

int main(){
    //Declaração das variáveis
    int cartaoAmarelo, cartaoVermelho;
    int quantidadeCartao;

    printf("Quantos cartões amarelos o jogador recebeu? ");
    scanf("%d", &cartaoAmarelo);
    printf("Qantos cartões vermelhos o jogador recebeu?");
    scanf("%d", &cartaoVermelho);

    if(cartaoAmarelo == 0 && cartaoVermelho == 0){
        printf("Jogador sem cartões!");
    }else if(cartaoAmarelo == 1 && cartaoVermelho == 0){
        printf("Jogador amarelado!");
    }else{
        printf("Jogador expulso!");

    }
    return 0;
}

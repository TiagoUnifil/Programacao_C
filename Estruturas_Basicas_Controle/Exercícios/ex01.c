/*1 - Apresentação do Jogador
Crie um programa que peça o primeiro nome de um jogador,
sua idade e a quantidade de gols que ele já fez na
carreira. Em seguida, exiba essas informações na tela.*/

#include <stdio.h>

int main(){
    char nome[50];
    int idade, gols;

    printf("Digite seu primeiro nome: \n");
    scanf("%s", nome);
    printf("Digite sua idade: \n");
    scanf("%d", &idade);
    printf("Digite a quantidade de gols feitos: \n");
    scanf("%d", &gols);

    printf("O jogador %s tem %d anos de idade e fez %d em toda a sua carreira. \n ", nome, idade, gols);

return 0;


}

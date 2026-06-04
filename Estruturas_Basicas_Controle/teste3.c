#include <stdio.h>

int main(){

    int idade;

    printf("Digite a sua idade: \n");
    scanf("%d", &idade);
    if(idade < 18){
        printf("Menor de idade, proibido a entrada!");

    }else if (idade >= 18 && idade < 60){
        printf("Adulto, pode entrar!");

    }else{
        printf("Idoso, merece todo o respeito!");
    }

    return 0;
}

#include <locale.h>
#include <strings.h>
#include <stdio.h>
#include <stdlib.h>

int main(){

    setlocale(LC_ALL, "Portuguese_Brazil");

    char nome[20], estadoc[20], estudo[20], moradia[20];
    int idade;

    printf("Olá!\nQual é o seu nome?\n");
    scanf("%s", &nome);

    printf("Quantos anos você tem?\n");
    scanf("%i", &idade);

    printf("Onde você estuda?\n");
    scanf("%s", &estudo);

    printf("Qual é o seu estado civil?\n");
    scanf("%s", &estadoc);

    printf("Onde você mora?\n");
    scanf("%s", &moradia);

    printf("Ok!\n%s, você tem %i anos, estuda no %s, você é %s e mora em %s!\nBoa sorte em sua vida!", nome, idade, estudo, estadoc, moradia);

}
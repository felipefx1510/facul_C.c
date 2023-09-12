#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <strings.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");

    char nome[20];
    float valinicial, taxa, tempo;


    printf("Olá! Qual é o seu nome?\n");
    scanf("%s", nome);

    printf("%s, veja bem...\nPara calcularmos o seu juros, precisaremos de alguns dados, ok?\nPrimeiro, qual é o valor principal?\n");
    scanf("%f", &valinicial);

    printf("Ok! E qual é a porcentagem anual de juros?\n");
    scanf("%f", &taxa);

    printf("E por quantos anos você ficará pagando?\n");
    scanf("%f", &tempo);

    printf("Entendi. Só um momento...\nConforme informado, o valor total do que você pagará é: R$ %.2f", (valinicial+(valinicial*(taxa/100)*tempo)));

}
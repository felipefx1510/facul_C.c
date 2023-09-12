#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");

    float tempi;
    printf("Olá, seja bem-vindo a calculadora de conversão de Fahrenheit para Kelvin!\nQual é a temperatura em Fahrenheit?\n");
    scanf("%f", &tempi);
    printf("Ok! Este é o valor convertido para Kelvin: %.2f", (tempi-32)*5/9+273.15);
}

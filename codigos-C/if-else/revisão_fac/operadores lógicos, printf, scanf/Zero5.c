#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <strings.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");

    float temp;

    printf("Olá! Seja bem-vindo a calculadora básica de conversão de Celsius para Fahrenheit.\nDigite a temperatura em Celsius:\n");
    scanf("%f", &temp);

    printf("Ok! %.2f graus em Celsius é: %.2f graus", temp, ((temp*9/5)+32));
}
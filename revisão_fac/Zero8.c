#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <strings.h>

int main()
{

    setlocale(LC_ALL, "Portuguese_Brazil");

    float real, resultado;
    double dolar;
    dolar = 4.86;  

    printf("Olá! Seja bem-vindo ao sistema de conversão de real para dolár!\nQual é o valor que você deseja converter?\n");
    scanf("%f", &real);

    resultado = (real/dolar);

    printf("Na cotação atual, R$ %.2f é equivalente a US$ %.2f", real, resultado);




}
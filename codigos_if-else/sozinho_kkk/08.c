#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{

    setlocale(LC_ALL, "Portuguese_Brazil");

    float n1, desconto, valor;
    desconto = 0.10;

    printf("Olá, digite o preço do produto:\n");
    scanf("%f", &n1);

    if (n1 >= 100)
    {
        valor = (n1 * desconto) + n1;
        printf("Válido para o desconto!\nO valor final com o desconto de dez por cento é: R$ %.2f.", valor);
    }
    
    else
    {
        printf("Infelizmente seu valor não é válido para o desconto! O valor ainda é: R$ %.2f.", n1);
    }
}
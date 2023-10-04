#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <strings.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");

    int unidadei, unidadef;
    float valor, conversao;

    printf("Olá, seja bem-vindo a calculadora de conversão de unidades de medida!\n");
    printf("Qual é a sua unidade inicial?\n1. Metros\n2. Centímetros\n3. Polegadas\n");
    scanf("%i", &unidadei);

    switch (unidadei)
    {
        case 1: // metros
            printf("Ok, e qual é a unidade de destino?\n"); // selecao principal
            printf("1. Centímetros\n2. Polegadas\n");
            scanf("%i", &unidadef);
            switch (unidadef)
            {
                case 1: // metros para centímetros
                    printf("Digite o valor a ser convertido:\n");
                    scanf("%f", &valor);
                    conversao = valor * 100;
                    printf("%.2f metros convertido para centímetros é: %.2f", valor, conversao);
                    break;

                case 2: // metros para polegadas
                    printf("Digite o valor a ser convertido:\n");
                    scanf("%f", &valor);
                    conversao = valor * 39.37;
                    printf("%.2f metros convertido para polegadas é: %.2f", valor, conversao);
                    break;
                
                default:
                    printf("Seleção inválida. Tente novamente!");
                    break;
            }
            break;

        case 2: // centímetros
            printf("Ok, e qual é a unidade de destino?\n"); // seleção principal
            printf("1. Metros\n2. Polegadas\n");
            scanf("%i", &unidadef);
            switch (unidadef)
            {
                case 1: // centímetros -> metros
                    printf("Digite o valor a ser convertido:\n");
                    scanf("%f", &valor);
                    conversao = valor / 100;
                    printf("%.2f centímetros convertido para metros é: %.2f", valor, conversao);
                    break;

                case 2: // centímetros -> polegadas
                    printf("Digite o valor a ser convertido:\n");
                    scanf("%f", &valor);
                    conversao = valor / 2.54;
                    printf("%.2f centímetros convertidos para polegadas é: %.2f", valor, conversao);
                    break;

                default:
                    printf("Seleção inválida. Tente novamente!");
                    break;
            }
            break;

        case 3: // polegadas
            printf("Ok, e qual é a unidade de destino?\n"); // seleção principal
            printf("1. Metros\n2. Centímetros\n");
            scanf("%i", &unidadef);
            switch (unidadef)
            {
                case 1: // polegadas -> metros
                printf("Digite o valor a ser convertido:\n");
                scanf("%f", &valor);
                conversao = valor / 39.37;
                printf("%.2f polegadas convertido para metros é: %.2f", valor, conversao);
                break;

                case 2: // polegadas -> centímetros
                printf("Digite o valor a ser convertido:\n");
                scanf("%f", &valor);
                conversao = valor * 2.54;
                printf("%.2f polegadas convertido para centímetros é: %.2f", valor, conversao);
                break;

                default:
                printf("Seleção inválida. Tente novamente!");

            }
            break;
    }
}

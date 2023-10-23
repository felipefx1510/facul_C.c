#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <strings.h>

int main()
{

    setlocale(LC_ALL, "Portuguese_Brazil");

    char op;
    float n1, n2, resultado;

    printf("Olá, seja bem-vindo(a)!\n");
    printf("Qual operação iremos utilizar agora?\n");
    printf("Adição - '+'\n");
    printf("Subtração - '-'\n");
    printf("Multiplicação - 'x'\n");
    printf("Divisão - '/'\n");
    scanf("%c", &op);

    printf("Digite um número:\n");
    scanf("%f", &n1);

    printf("Digite outro número:\n");
    scanf("%f", &n2);

    switch (op)
    {
    case '+':
        resultado = n1 + n2;
        printf("O resultado da soma é: %.2f", resultado);
        break;
    
    case '-':
        resultado = n1 - n2;
        printf("O resultado da subtração é: %.2f", resultado);
        break;

    case 'x':
        resultado = n1 * n2;
        printf("O resultado da multiplicação é: %.2f", resultado);
        break;
        
    case '/':
        resultado = n1 / n2;
        printf("O resultado da divisão é: %.2f", resultado);
        break;

    default:
        printf("A operação selecionada é inválida. Tente novamente!");
        break;
    }





}
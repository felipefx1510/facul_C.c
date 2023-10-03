#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <strings.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");

    float n1, n2;

    printf("Olá, seja bem-vindo(a) a calculadora multifuncional!\nDigite um número, por favor:\n");
    scanf("%f", &n1); //primeira chamada de número

    printf("Agora, digite um segundo número, por favor:\n");
    scanf("%f", &n2); //segunda chamada de número

    printf("Bom... Vejamos...");
    printf("Só mais um momento...\nOK!\n\n"); //interação fajuta

    printf("O resultado da soma dos dois números é: %.2f\n", (n1+n2)); // o %.2f sempre é para limitar as casas e/ou mostrar os números do cálculo
    printf("O resultado da subtração dos dois números é: %.2f\n", (n1-n2));
    printf("O resultado da multiplicação dos dois números é: %.2f\n", (n1*n2));
    printf("O resultado da divisão dos dois números é: %.2f\n", (n1/n2));
}

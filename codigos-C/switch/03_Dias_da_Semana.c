#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <strings.h>

int main()
{

    int n;

    printf("Digite um número de 1 a 7:\n");
    scanf("%i", &n);

    switch (n)
    {
    case 1:
        printf("Domingo!");
        break;

    case 2:
        printf("Segunda!");
        break;

    case 3:
        printf("Terça!");
        break;

    case 4:
        printf("Quarta!");
        break;

    case 5:
        printf("Quinta!");
        break;

    case 6:
        printf("Sexta!");
        break;

    case 7:
        printf("Sábado!");
        break;

    default:
        printf("Opção incorreta, tente novamente!");
        break;
    }

}
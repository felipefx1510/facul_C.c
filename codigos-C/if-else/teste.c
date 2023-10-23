#include <locale.h>
#include <strings.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{

    setlocale(LC_ALL, "Portuguese_Brazil");

    int n1, n2;

    printf("Digite o primeiro número:\n");
    scanf("%i", &n1);

    printf("Digite o segundo número:\n");
    scanf("%i", &n2);

    if (n1 > n2)
    {
        printf("%i é maior que %i!", n1, n2);
    }

    else if (n2 > n1)
    {
        printf("%i é maior que %i!", n2, n1);
    }

    else
    {
        printf("Ambos os números são iguais!");
    }
   
}
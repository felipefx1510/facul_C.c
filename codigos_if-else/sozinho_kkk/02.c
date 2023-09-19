#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()

{

    setlocale(LC_ALL, "Portuguese_Brazil");

    int n1, n2, n3;

    printf("Olá, digite um número:\n");
    scanf("%i", &n1);

    printf("Digite outro número:\n");
    scanf("%i", &n2);

    printf("Digite outro número:\n");
    scanf("%i", &n3);

    if (n1 >= n2 && n1 >= n3)
    {
        printf("%i é o maior valor!", n1);
    }
    
    else if (n2 >= n1 && n2 >= n3)
    {
        printf("%i é o maior valor!", n2);
    }

    else
    {
        printf("%i é o maior valor!", n3);
    }
}
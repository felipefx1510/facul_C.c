#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{

    setlocale(LC_ALL, "Portuguese_Brazil");

    int n1;

    printf("Olá, digite um número inteiro qualquer!\n"); 
    scanf("%i", &n1);

    if (n1 >= 0)
    {
        printf("Seu número é positivo!!");
    }

    else if (n1 < 0)
    {
        printf("Seu número é negativo!");
    }
      
}
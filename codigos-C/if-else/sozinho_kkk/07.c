#include <stdio.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "Portuguese_Brazil");

    int n1;

    printf("Olá, seja bem-vindo a ferramenta de verificação de números inteiros primos!\nDigite seu número:\n");
    scanf("%i", &n1); //tendi n

    if (n1 % 1 && n1 % n1)
    {
        printf("O número %i é primo!", n1);
    }
    
    else
    {
        printf("O número %i não é primo!", n1);
    }
}
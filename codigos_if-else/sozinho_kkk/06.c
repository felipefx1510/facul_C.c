#include <stdio.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "Portuguese_Brazil");

    int idade;

    printf("Olá, seja bem-vindo ao sistema de votação!\nDigite a sua idade para comerçarmos:\n");
    scanf("%i", &idade);

    if (idade >= 18)
    {
        printf("Maior de 18! Pode prosseguir.");
    }

    else
    {
        printf("Menor de 18! Infelizmente você não poderá votar.");
    }
    

}
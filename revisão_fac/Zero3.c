#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <strings.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");

    float pol = 0.393701;
    float cent;
    printf("Olá!\nSeja bem-vindo ao conversor de medidas.\nCentímetros ->> Polegadas\nDigite o tamanho, por favor:\n");
    scanf("%f", &cent);

    printf("Ok! Pelos meus cálculos...\n%.2f centímetros em polegadas é igual a:¨%.2f polegadas", cent, (cent*pol));

}
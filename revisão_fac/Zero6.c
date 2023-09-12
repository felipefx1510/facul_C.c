#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <strings.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");

    int a, b, aux;

    printf("Olá, digite um número que será 'a':\n");
    scanf("%i", &a);

    printf("Agora, digite outro número que será 'b':\n");
    scanf("%i", &b);

    aux = a;
    a = b;
    b = aux;

    printf("HAHAHA!!\nPedadinha do malandro!\nAgora 'a' é igual a 'b' e 'b' igual a 'a'\nVeja:\na = %i\nb = %i", a, b);

}   

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "Portuguese_Brazil");

    float n1, n2, n3;

    printf("Olá, digite as medidas do triângulo separadamente por espaço:\n");
    scanf("%f %f %f", &n1, &n2, &n3); // descobri que posso fazer assim

    if (n1 == n2 && n1 == n3)
    {
        printf("O triângulo é equilátero.");
    }
    
    else if (n1 == n2 || n1 == n3)
    {
        printf("O triângulo é isósceles.");
    }

    else
    {
        printf("O triângulo é escaleno.");
    }    
}
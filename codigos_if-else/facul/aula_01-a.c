#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()

{

    setlocale(LC_ALL, "Portuguese_Brazil");

    int a, b, c;
    int pontos = 0;

    printf("Quanto é 56-17?\n");
    scanf("%i", &a);

    printf("Quanto é 34x12?\n");
    scanf("%i", &b);

    printf("Quanto é 123+48?\n");
    scanf("%i", &c);

    if (a == 39)
    {
        pontos++;
    }

    if (b == 408)
    {
        pontos++;
    }

    if (c == 171)
    {
        pontos++;
    }

    printf("Opa, você acertou %i questões! Parabéns!", pontos);


}

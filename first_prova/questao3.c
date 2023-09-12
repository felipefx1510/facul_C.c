#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "");

    float n1, n2, n3, p1, p2, p3, total;

    printf("Olá, digite uma nota:\n");
    scanf("%f", &n1);
    printf("Qual o peso da nota?\n");
    scanf("%f", &p1);

    printf("Olá, digite a segunda nota:\n");
    scanf("%f", &n2);
    printf("Qual o peso da nota?\n");
    scanf("%f", &p2);

    printf("Olá, digite a terceira nota:\n");
    scanf("%f", &n3);
    printf("Qual o peso da nota?\n");
    scanf("%f", &p3);

    total = (n1*p1+n2*p2+n3*p3)/(p1+p2+p3);
    
    printf("Está será a média ponderada: %.2f\n", total);


    return 0;


}

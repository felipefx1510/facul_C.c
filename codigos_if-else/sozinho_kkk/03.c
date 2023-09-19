#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{

    setlocale(LC_ALL, "Portuguese_Brazil");

    float n1, n2, resultado;
    int oper;

    printf("Olá, digite um número!\n");
    scanf("%f", &n1);

    printf("Digite outro número:\n");
    scanf("%f", &n2);
    
    printf("Digite a opção desejada:\n1 - Adição\n2 - Subtração\n3 - Multiplicação\n4 - Divisão\n\n");
    scanf("%i", &oper);

    if (oper == 1)
    {
        resultado = n1 + n2;
        printf("O resultado da soma é: %.2f!", resultado);
    }

    else if (oper == 2)
    {
        resultado = n1 - n2;
        printf("O resultado da subtração é: %.2f", resultado);
    }

    else if (oper == 3)
    {
        resultado = n1 * n2;
        printf("O resultado da multiplicação é: %.2f", resultado);
    }

    else
    {
        resultado = n1 / n2;
        printf("O resultado da divisão é: %.2f", resultado);
    }
    
    
    
}
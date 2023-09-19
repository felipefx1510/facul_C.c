#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "Portuguese_Brazil");

    int opc;
    float temp, resultado;

    printf("Olá, seja bem-vindo ao conversor de temperatura!\nQue opção você deseja?\n\n1. Celsius -> Fahrenheit\n2. Fahrenheit -> Celsius\n");
    scanf("%i", &opc);

    if (opc == 1)
    {
        printf("Ok! Agora digite a temperatura em Celsius:\n");
        scanf("%f", &temp);
        resultado = (temp * 9/5) + 32;
        printf("A temperatura de %.2f Celsius corresponde a %.2f Fahrenheit\n", temp, resultado);
    }
    
    else if (opc == 2)
    {   
        printf("Ok! Agora digite a temperatura em Fahrenheit:\n");
        scanf("%f", &temp);
        resultado =  (temp - 32) * 5/9;
        printf("A temperatura de %.2f Fahrenheit corresponde a %.2f Celsius\n", temp, resultado);
    }
    
}
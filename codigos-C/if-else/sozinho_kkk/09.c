#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <strings.h>

int main()
{

    setlocale(LC_ALL, "Portuguese_Brazil");

    char letra;

    printf("Olá, seja bem-vindo a ferramenta de verifiação de letra consoante ou vogal!\nDigite a letra desejada:\n");
    scanf("%c", &letra);

    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u')
    {
        printf("A letra '%c' é uma vogal!", letra);
    }
    
    else
    {
        printf("A letra '%c' é uma consoante!", letra);
    }
}
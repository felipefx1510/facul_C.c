#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <strings.h>

int main()
{

    setlocale(LC_ALL, "Portuguese_Brazil");

    float n1, n2, n3, resultado;

    printf("Olá, rapazinho! Anda estudando muito? Vamos calcular a sua média!\nDigite a primeira nota:\n");
    scanf("%f", &n1);

    printf("Agora, digite a segunda nota:\n");
    scanf("%f", &n2);

    printf("Por fim, a terceira nota:\n");
    scanf("%f", &n3);

    resultado = ((n1+n2+n3)/3);

    printf("Veja bem...\nSua média atual é: %.2f", resultado);
}
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "Portuguese_Brazil");

    int n1, n2, aux;

    printf("Contagem de:\n");
    scanf("%d", &n1);

    printf("Até:\n");
    scanf("%d", &n2);

    for (aux = n1; aux <= n2; aux++){
        printf("%d\n", aux);
    }

}
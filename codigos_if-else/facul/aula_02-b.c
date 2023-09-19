#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()

{

    setlocale(LC_ALL, "Portuguese_Brazil");

    float n1, n2, media;

    printf("Olá, digite a sua primeira nota!\n");
    scanf("%f", &n1);

    printf("Digite a segunda nota:\n");
    scanf("%f", &n2);

    media = (n1 + n2)/2;

    if (media >= 7)
    {
        printf("APROVADO!");

    }
    
    else if(media >= 4)
        {
            printf("RECUPERAÇÃO KKKKKK!");
        }

    else
        {
            printf("SE LASCOU KKKKKKK, REPROVADO");
        }

}
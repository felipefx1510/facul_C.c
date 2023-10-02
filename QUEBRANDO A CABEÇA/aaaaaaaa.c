    #include <locale.h>
    #include <stdio.h>
    #include <stdlib.h>
    #include <strings.h>

    int main()
    {
        setlocale(LC_ALL, "Portuguese_Brazil");

        float peso, altura, imc;

        printf("Olá, qual é o seu peso?\n");
        scanf("%f", &peso);

        printf("E qual é a sua altura?\n");
        scanf("%f", &altura);

        imc = peso / (altura*altura);

        if (imc < 16)
        {
            printf("BAIXO PESO MUITO GRAVE! Procure um médico IMEDIATAMENTE!");
        }
        
        else if (imc >= 16 && imc <= 16.99)
        {
            printf("BAIXO PESO GRAVE! Procure um médico o MAIS RÁPIDO POSSÍVEL!");
        }
        
        else if (imc >= 17 && imc <= 18.49)
        {
            printf("BAIXO PESO! Peça orientações a seu nutricionista!");
        }

        else if (imc >= 18.50 && imc <= 24.99)
        {
            printf("Seu IMC é EXCELENTE! Parabéns!");
        }
        
        else if (imc >= 25 && imc <= 29.99)
        {
            printf("SOBREPESO! Tenha atenção em sua alimentação!");
        }
        
        else if (imc >= 30 && imc <= 34.99)
        {
            printf("OBESIDADE GRAU I! Atenção, indícios de obesidade! Procure seu médico!");
        }
        
        else if (imc >= 35 && imc <= 39.99)
        {
            printf("OBESIDADE GRAU II! Procure um médico nutricionista o MAIS RÁPIDO POSSÍVEL!");
        }
        
        else
        {
            printf("OBESIDADE GRAU III! Sua situação é de risco! Procure um médico IMEDIATAMENTE");
        }
    }
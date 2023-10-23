#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
  setlocale (LC_ALL, "");
  float valor, juros, vc, meses, total;
  printf("Olá, bem-vindo à calculadora de juros\nQual o valor que será pago?\n");
  scanf("%f", &valor);

  printf("Certo, agora me diga qual o valor do juros:\n");
  scanf("%f", &juros);
  juros = juros/100;
  vc = valor*juros;
  
  printf("Quantos meses você ficará pagando?\n");
  scanf("%f", &meses);
  total = (vc*meses)+valor;
  printf("Obrigado pelas informações, este será o valor que você pagará no final:%.2f\n", total);

}
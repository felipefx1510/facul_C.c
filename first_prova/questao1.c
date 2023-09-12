#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <locale.h>

int main(){

  setlocale(LC_ALL, "Portuguese_Brazil");

  float total, taxa, pessoas, fim, fimp, fimstx;

  printf("Olá, qual foi o total da conta?\n");
  scanf("%f", &total);

  taxa = 0.10;

  printf("Quantas pessoas irão pagar a conta?\n");
  scanf("%f", &pessoas);

  fim = (total*taxa)+total;
  fimp = fim/pessoas;
  fimstx = total/pessoas;

  printf("Este é o valor total: R$ %.2f\n", fim);

  printf("Este é o valor que cada um irá pagar com a taxa do garçom: R$ %.2f\n", fimp);

  printf("Este é o valor que cada um irá pagar sem a taxa do garçom; R$ %.2f\n", fimstx);

}

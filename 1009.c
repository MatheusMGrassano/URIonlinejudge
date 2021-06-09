#include <stdio.h>
 
int main() { 
    
  char nome[20];
  double fixo, vendas, total;
  scanf("%s %lf %lf", nome, &fixo, &vendas);
  total = fixo + (vendas*0.15);
  printf("TOTAL = R$ %.2lf\n",total);
    
    return 0;
}
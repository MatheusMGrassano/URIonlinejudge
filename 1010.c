#include <stdio.h>
 
int main() { 
    
  int cod1, num1, cod2, num2;

  double valor1, valor2, x;

  scanf("%d %d %lf \n", &cod1, &num1, &valor1);
  scanf("%d %d %lf \n", &cod2, &num2, &valor2);

  x=(num1*valor1) + (num2*valor2);

  printf("VALOR A PAGAR: R$ %.2lf\n", x);

    
    return 0;
}
#include <stdio.h>

int main() {
    
  double valor, centavos;
  int troco, cem, cinquenta, vinte, dez, cinco, dois, valorInt, umR, cinquentaC, vinteecincoC, dezC, cincoC, umC;
  scanf("%lf", &valor);

  troco = valor;
  cem = troco / 100;
  troco = troco - (cem *100);
  cinquenta = troco / 50;
  troco = troco - (cinquenta * 50);
  vinte = troco / 20;
  troco = troco - (vinte * 20);
  dez = troco /10;
  troco = troco -(dez * 10);
  cinco = troco / 5;
  troco = troco - (cinco * 5);
  dois = troco / 2;
  troco = troco - (dois * 2);

  valorInt = valor;
  centavos = (valor - valorInt)*100;

  umR = troco;
  cinquentaC = centavos / 50;
  centavos = centavos - (cinquentaC * 50);
  vinteecincoC = centavos / 25;
  centavos = centavos - (vinteecincoC * 25);
  dezC = centavos / 10;
  centavos = centavos - (dezC * 10);
  cincoC = centavos / 5;
  centavos = centavos - (cincoC * 5);
  umC = centavos;

    printf("NOTAS:\n");

	printf("%d nota(s) de R$ 100.00\n",cem);
    
	printf("%d nota(s) de R$ 50.00\n",cinquenta);
    
	printf("%d nota(s) de R$ 20.00\n",vinte);
    
	printf("%d nota(s) de R$ 10.00\n",dez);
    
	printf("%d nota(s) de R$ 5.00\n",cinco);
    
    printf("%d nota(s) de R$ 2.00\n",dois);
    
    printf("MOEDAS:\n");
    
    printf("%d moeda(s) de R$ 1.00\n",umR);
    
    printf("%d moeda(s) de R$ 0.50\n",cinquentaC);
    
    printf("%d moeda(s) de R$ 0.25\n",vinteecincoC);
    
    printf("%d moeda(s) de R$ 0.10\n",dezC);
    
    printf("%d moeda(s) de R$ 0.05\n",cincoC);
    
    printf("%d moeda(s) de R$ 0.01\n",umC);

    
    
    return 0;
}
#include <stdio.h>
 
int main() { 
    
        
    int escolha,qtd;
    double total;
    scanf("%d %d",&escolha,&qtd);
    
    switch(escolha){
      case 1:
        total = qtd * 4;
      break;
      case 2:
        total = qtd * 4.5;
      break;
      case 3:
        total = qtd * 5;
      break;
      case 4:
        total = qtd * 2;
      break;
      case 5:
        total = qtd * 1.5;
      break;
    }
    printf("Total: R$ %.2lf\n",total);

    return 0;
}
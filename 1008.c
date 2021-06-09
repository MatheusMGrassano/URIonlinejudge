#include <stdio.h>
 
int main() { 
    
  int num,HorasT;
  float HorasP;
  scanf("%d %d %f",&num,&HorasT,&HorasP);
  printf("NUMBER = %d\n",num);
  printf("SALARY = U$ %.2f\n", HorasT*HorasP);
  
    
    return 0;
}
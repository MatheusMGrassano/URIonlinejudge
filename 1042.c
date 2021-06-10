#include <stdio.h>
 
int main() { 


    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    
    if(a>b && b>c){
      printf("%d\n",c);
      printf("%d\n",b);
      printf("%d\n\n",a);
    }if(a>c && c>b){
      printf("%d\n",b);
      printf("%d\n",c);
      printf("%d\n\n",a);
    }if(b>a && a>c){
      printf("%d\n",c);
      printf("%d\n",a);
      printf("%d\n\n",b);
    }if(b>c && c>a){
      printf("%d\n",a);
      printf("%d\n",c);
      printf("%d\n\n",b);
    }if(c>b && b>a){
      printf("%d\n",a);
      printf("%d\n",b);
      printf("%d\n\n",c);
    }if(c>a && a>b){
      printf("%d\n",b);
      printf("%d\n",a);
      printf("%d\n\n",c);
    }
    
    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d\n",c);
    

    return 0;
}
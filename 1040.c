#include <stdio.h>
 
int main() { 
    
  double n1,n2,n3,n4,exm,media,mediaF;
  scanf("%lf %lf %lf %lf",&n1,&n2,&n3,&n4);
  media = ((n1*2)+(n2*3)+(n3*4)+(n4*1))/10;
  printf("Media: %.1lf\n",media);

  if (media >= 7){
    printf("Aluno aprovado.\n");
  }if (media < 5){
    printf("Aluno reprovado.\n");
  }if (media >= 5 && media < 7){
    printf("Aluno em exame.\n");
    scanf("%lf",&exm);
    printf("Nota do exame: %.1lf\n",exm);
    mediaF = (media + exm) / 2;
    if (mediaF >= 5){
    printf("Aluno aprovado.\n");
    }if (mediaF < 5){
    printf("Aluno reprovado.\n");
    }
    printf("Media final: %.1lf\n",mediaF);
  }

    
    return 0;
}
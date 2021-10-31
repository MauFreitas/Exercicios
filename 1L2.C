#include <stdio.h>

int main(void) {
  float n1,n2,media;
  printf("Insira a sua nota da primeira avaliação\n");
  scanf("%f", &n1);
  printf("Insira a sua nota da segunda avaliação\n");
  scanf("%f", &n2);

  media = (n1+n2) / 2;
if(n1<3 || n2<3){
  printf("Reprovado\n");
  {printf("Voce é burro pra krl");}
  
}else{printf("Parabens você foi aprovado!!\n Sua media é de %.1f \n", media);}

}
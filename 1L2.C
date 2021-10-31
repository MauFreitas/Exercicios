#include <stdio.h>

int main(void) {
  float n1,n2,media;
  int faltas;
  printf("Insira a sua nota da primeira avaliação\n");
  scanf("%f", &n1);
  printf("Insira a sua nota da segunda avaliação\n");
  scanf("%f", &n2);
  printf("Insira o número de faltas:\n");
  scanf("%i", &faltas);

  media = (n1+n2) / 2;
if((n1<3 || n2<3) || faltas>15 || media<6){
  printf("Reprovado.\n");
  printf("Sua medía foi de %.2f \n", media);
  {if(media<4 ){printf("Reprovado por Media: %.2f \n", media);}
  }
  
}else {if(media>=7.5 && n1>=7 && n2>=7 && (n1>9 || n2>9)){printf("Você está convidado a se tornar monitor\n Parabens você foi aprovado!!\n Sua media é de %.1f \n",media);}
    else{printf("Parabens você foi aprovado!!\n Sua media é de %.1f \n", media);}
  


}}
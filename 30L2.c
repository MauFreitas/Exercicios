#include <stdio.h>

int main (void){

//0=não 1=sim

int idade, resposta;
float mens, tax;

  mens=0;
  printf("Qual a sua idade?\n");
  scanf("%i", &idade);

  if (idade>29){
    printf("É fumante? 0 para não, 1 para sim\n");
    scanf("%i", &resposta);
    if (resposta==1){
      tax=30;
    }
    else{
      tax=0;
    }
    if (idade<45){
      mens=120;
    }
    else{
      if(idade<59){
      mens=150;
      }
      else{
        if(idade<65){
           mens=250;
        }
        else{
           mens=400;
        }
      }
    }
  }
  else{

  }
  printf("Taxa: R$%.2f\nMensalidade: R$%.2f",tax, mens+tax);

  return 0;

}
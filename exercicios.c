int main(void){
    float atValor, novoValor , aumento;
    printf ("Entre com o valor atual da passagem de onibus");
    scanf ("%f", &atValor);
    aumento = atValor * 0.12;
    novoValor = atValor + aumento;

    printf ("Reajuste de: R$ %.2f. \n",
    aumento);
    printf ("Novo valor da passagem: R$ %.2f. \n ", novoValor);
    return (0);
}
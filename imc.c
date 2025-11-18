#include <stdio.h>

int main (void)
{
    //capturar dados do usuario
    float peso;
    float altura;
    printf("qual seu peso?: \n ");
    scanf("%f", &peso);
    printf("qual a sua altura?: ");
    scanf("%f", &altura);

    printf("sua altura %.2f \n", altura/100);
    printf("seu peso %.2f \n",peso );
    altura = altura/100;
    printf("e seu imc:  %.2f", peso / (altura * altura));
    //calcular o imc
    //resultado






}
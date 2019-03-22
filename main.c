#include <stdio.h>
#include <stdlib.h>

float suma(float primerValor, float segundoValor);

int main()
{
float valor;
float resultado;
float max;
float min;
int contador=0;

do {
printf("Ingrese un valor (termina cuando ingresa '-1'): ");
scanf("%f", &valor);
if (contador==0){
    max=valor;
    min=valor;
}
else{
    if (valor>max){
        max=valor;
}
    else if (valor<min){
        min=valor;
        }
}
resultado= suma(resultado, valor);
contador++;
}
while (valor!= (-1));
    printf(" Resultado: %.2f \n Max: %.2f \n Min: %.2f", resultado, max, min);
    return 0;
}
float suma(float primerValor, float segundoValor){
return primerValor+ segundoValor;

}


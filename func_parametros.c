//Paso de funciones como parametros
// Programa que calcula el cuadrado y el cubo de un numero
#include <stdio.h>
void aplicarFuncion(int(*funcion)(int), int num);
int cuadrado (int x);
int cubo (int x);

int main (){
    int num;
    printf("Ingrese un numero:");
    scanf("%i",&num);

    printf("Aplicando la funcion cuadrado a %d: ",num);
    aplicarFuncion(cuadrado,num);
    printf("Aplicando la funcion cubo a %d: ",num);
    aplicarFuncion(cubo, num);

    return 0;
}

void aplicarFuncion(int(*funcion)(int), int num){
    int resultado = funcion(num);
    printf("%d\n", resultado);
}
int cuadrado(int x){
    return x*x;
}
int cubo(int x){
    return x*x*x;
}

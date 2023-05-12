/*Escriba un programa en C que lea un vector de 10 elementos y calcule la suma
de todos los elementos del vector. Imprima el resultado en la pantalla.*/

#include <stdio.h>

int main (){
    int v[10];
    int i, suma;
    //Llenado de vector
    for (i=0;i<10;i++){
        printf("Ingrese el elemento #%i: \n", i);
        scanf("%d",&v[i]);
    }
    //Suma de elementos
    suma = 0;
    for (i=0;i<10;i++){
        suma = suma + v[i];
    }
    printf("La suma de todos los elementos del vector es: %d \n",suma);
    return 0;
}
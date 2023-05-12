/* Escriba un programa en C que lea dos vectores de 10 elementos y calcule un tercer vector
que contenga el producto de los elementos correspondientes de los dos vectores. 
Imprima el vector resultante en la pantalla.  */

#include <stdio.h>

int main (){
    int v1[10], v2[10], producto[10];
    int i;
    //Llenado de vector 1
    printf("Ingrese los elementos del primer vector: \n");

    for (i=0;i<10;i++){
        printf("Ingrese el elemento #%i: \n", i);
        scanf("%d",&v1[i]);
    }
    printf("Ingrese los elementos del segundo vector: \n");
    for (i=0;i<10;i++){
        printf("Ingrese el elemento #%i: \n", i);
        scanf("%d",&v2[i]);
    }
    //Producto de ambos vectores
    for (i=0;i<10;i++){
        producto[i] = v1[i] * v2[i];
    }
    //Resultado
    printf("El vector resultando es: \n");
    for (i=0; i<10; i++){
        printf("%d, ", producto[i]);
    }
    return 0;

}
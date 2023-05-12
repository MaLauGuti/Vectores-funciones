/* Escriba un programa en C que lea un vector de
10 elementos y ordene los elementos en orden ascendente. Imprima el vector
ordenado en la pantalla.*/

#include <stdio.h>
int main (){
 int v[10];
    int i,j, aux;
    //Llenado de vector
    for (i=0;i<10;i++){
        printf("Ingrese el elemento #%i: \n", i);
        scanf("%d",&v[i]);
    }

    //Ordenamiento de vector
    aux=0;
    for (i=0;i<10;i++){
        for(j=i;j<10;j++){
            if ( v[i]> v[j]){
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }

    }
    //Imprimir vector ordenado
    for (i=0;i<10;i++){
        printf("%d, " , v[i]); 
    }
    return 0;
}
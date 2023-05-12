/* Escriba un programa en C que lea un vector de 10 elementos y un número entero. 
El programa debe buscar el número en el vector y mostrar su posición en el vector 
(o informar si no está presente en el vector).*/
#include <stdio.h>

int main () {
int v[10];
    int i, num, pos;
    //Llenado de vector
    for (i=0;i<10;i++){
        printf("Ingrese el elemento #%i: \n", i);
        scanf("%d",&v[i]);
    }
    printf("Ingrese el numero a buscar: \n");
    scanf("%d",&num);

    //Busqueda del numero dentro del vector
    for (i=0;i<10;i++){
        if (v[i] == num){
            pos =i;
            break;
        }
    }
    //Resultado
    if(pos == -1){
        printf("El numero %d no se encuentra en el vector\n",num);
    } else {
        printf("El numero %d se encuentra en la posicion %d del vector\n", num,pos);
    }
    return 0;
}
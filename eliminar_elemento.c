/* Escriba un programa en C que lea un vector de 10 elementos y un número entero. El programa debe eliminar el número del
vector si está presente y mostrar el vector resultante en la pantalla.*/

#include <stdio.h>
int main (){
int v[10];
    int i,j, num, pos;
    //Llenado de vector
    for (i=0;i<10;i++){
        printf("Ingrese el elemento #%i: \n", i);
        scanf("%d",&v[i]);
    }
    printf("Ingrese el numero a eliminar: \n");
    scanf("%d",&num);
    //Busqueda del numero en el vector
    for (i=0;i<10;i++){
        if (v[i] == num){
            pos =i;
            break;
        }
    }
    //Eliminar elemento
    if (pos != -1){
        for (i =pos;i<9;i++){
            v[i] = v[i+1];
        }
        v[9]= 0;
    }
    // Resultado
    printf("El vector que resulta es: \n");
    for(i =0; i<9; i++){
        printf("%d, ",v[i]);
    }
    return 0;
}
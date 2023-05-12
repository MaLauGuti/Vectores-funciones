/* programa en C que lee dos vectores de 10 elementos y calcula un
tercer vector que contiene el producto de los elementos correspondientes de
los dos vectores utilizando funciones:
 */

#include <stdio.h>

    void leer_vector(int v[], int tam){
        int i;
        for (i = 0; i<tam; i++){
            scanf("%d", &v[i]);
        }
    }
    void producto_vectores(int v1[], int v2[], int producto[], int tam){
        int i;
        for (i=0; i<tam; i++){
            producto[i] = v1[i]* v2[i];
        }
    }
    void imprimir_vector(int v[], int tam){
        int i;
        for (i=0; i< tam; i++){
            printf("%d, ", v[i]);
        }
        printf("\n");
    }
    int main (){
        int v1[10], v2[10], producto[10];
        printf("Ingrese los elementos del primer vector: \n");
        leer_vector(v1,10);
        printf("Ingrese los elementos del segundo vector: \n");
        leer_vector(v2,10);
        //Producto
        producto_vectores (v1,v2,producto,10);
        //Resultado
        printf ("El vector resultante: \n");
        imprimir_vector(producto,10);

        return 0;
    }

#include <stdio.h>
int main () {
    int i, l;
    printf("ingrese la longitud del vector: "); scanf("%d", &l);
    int arreglo[l];
    for(i = 0; i < l; i++){
        printf("ingrese un numero en la posicion %d: ",i);
        scanf("%d", &arreglo[i]);
    }
    for(i = 0; i < l; i++){
        printf("%d \n", arreglo[i]*arreglo[i]);

    }
    return 0;
 }

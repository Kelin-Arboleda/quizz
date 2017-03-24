#include <stdio.h>
int main () {
     int i, mayor = 0, menor, l;
    printf("ingrese la longitud del vector: "); scanf("%d", &l);
    int arreglo[100];
    for(i = 0; i < l; i++){
        printf("ingrese un numero en la posicion %d: ",i);
        scanf("%d", &arreglo[i]);
    }

    for(i = 0; i < l; i++){
        if(arreglo[i] < menor){
            menor = arreglo[i];
        }
    }
    printf("\n el elemento menor del vector es: %d \n",menor);
      for(i = 0; i < l; i++){
         if(arreglo[i] > mayor) {
            mayor = arreglo[i];
        }
    }
     printf("\n el elemento mayor del vector es: %d \n",mayor);
    return 0;
}

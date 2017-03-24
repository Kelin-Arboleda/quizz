#include <stdio.h>
int main () {
    int primos[5], i = 0, numero;
      for(i = 0; i < 5; i++){
         printf("ingrese un numero primo en posicion %d: ",i);
            scanf("%d", &primos[i]);
              if(primos[5]%i==0){
                    printf("%d \n", primos[i]);
        }
    }

    return 0;
}

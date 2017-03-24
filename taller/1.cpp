#include <stdio.h>
int main () {
    int vector1[] = {1,2,3,4,5,6,7,8,9};
    int i;
    for(i = 8; i >= 0; i--){
        printf("%d ", vector1[i]);
    }
    return 0;
}

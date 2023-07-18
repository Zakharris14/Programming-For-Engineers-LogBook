#include <stdio.h>

int main() {
    int a[] = {1, 20, 4, 50, 16, 2, 50, 82};
    int *p = &a[1], *q = &a[5];

    printf("%d\n", *(p+3));

    printf("%d\n", *(q-3));

    printf("%d\n", (q-p));

    if (p<q){
        printf("True\n");
    }else{
        printf("False\n");
    }

    if (*p<*q){
        printf("True\n");
    }else{
        printf("False\n");
    }
    
}

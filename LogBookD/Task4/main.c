#include <stdio.h>
int pb(int n);

int main() {
    int a;
    scanf("%d", &a);
    printf("%d", pb(a));
}

int pb(int n) {
    if (n==0){
        return 0;
    }else{
        return (n % 2) + 10 * pb(n / 2);
    }

}
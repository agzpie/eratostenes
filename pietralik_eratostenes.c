#include <stdio.h>
#include <stdbool.h>

bool isprime(int x) {
    for (int i=2; i<x/2; i++){
        if (x%i==0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    scanf("%d", &n);

    if ((n<=1) || (n>10000)) {
        printf("wrong number");
        return -1;
    }


    for (int i=2; i<=n; i++) {
        if (isprime(i)) {
            printf("%d ", i);
        }
    }

    return 0;
}
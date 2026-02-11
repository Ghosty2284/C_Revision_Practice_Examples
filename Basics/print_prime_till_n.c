#include <stdio.h>

// Function to check if a number is prime
int primeCheck(int x) {
    int i;

    if (x <= 1) {
        return 0;   // not prime
    }

    for (i = 2; i <= x/2; i++) {
        if (x % i == 0) {
            return 0;   // found a divisor → not prime
        }
    }

    return 1;   // prime
}

int main() {
    int n, i;

    printf("Enter n:\n");
    scanf("%d", &n);

    printf("Prime numbers up to %d are:\n", n);
    for (i = 2; i <= n; i++) {
        if (primeCheck(i)) {   // if primeCheck returns 1
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}


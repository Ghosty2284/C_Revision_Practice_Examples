// Code to find LCM of 2 numbers

#include <stdio.h>

// Function to find GCD using Euclidean algorithm
int findGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int n1, n2, gcd, lcm;

    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);

    // Calculate GCD
    gcd = findGCD(n1, n2);

    // Calculate LCM using the formula
    lcm = (n1 * n2) / gcd;

    printf("The LCM of %d and %d is %d\n", n1, n2, lcm);

    return 0;
}
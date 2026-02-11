// C program to calculate simple and compound interest

#include <stdio.h>
#include <math.h>

int main()
{
    float p, r, n, si, ci;

    printf("Enter your amount:\n");
    scanf("%f", &p);

    printf("Enter rate of interest:\n");
    scanf("%f", &r);

    printf("Enter number of years:\n");
    scanf("%f", &n);

    si = (p * n * r) / 100;

    ci = p * pow((1 + (r / 100)), n) - p;

    printf("Simple interest is %.2f\n", si);
    printf("Compound interest is %.2f\n", ci);

    return 0;
}

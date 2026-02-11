#include<stdio.h>

float multiply(float a,float b)
{
    return a*b;
}

int main(){
    float x,y,product;
    printf("Enter your first number :\n");
    scanf("%f",&x);
     printf("Enter your second number :\n");
    scanf("%f",&y);

    product = multiply(x,y);

    printf("The product is %.3f\n",product);

    return 0;
}
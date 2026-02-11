#include<stdio.h>
#include<math.h>

int main(){

    float f,c;

    printf("Enter the temperature in Fahrenheit:\n");
    scanf("%f",&f);

    c = (f-32)*5/9;

    printf("The temperature in Celcius is %f\n",c);
    
    return 0;

}
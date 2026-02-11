#include<stdio.h>

int main(){

int x,i,count=0;

    printf("Enter your number :\n");
    scanf("%d",&x);

    if(x==1){
    
    printf("%d is not a prime number\n",x);
    }
    else if(x>2){

    for(i=2;i<x/2;i++){   // Correction 1 : Check for divisors upto half of the number value i.e i<x/2
        if(x%i==0){
            count++;
        }
       else {
        continue;
       }
    }}
       if(count==0){ // Correction 2 : count == 0 not 1 as it should have no divisor from 2 to half its value
        printf("The number is  a prime number\n");
       }

       else {
       printf("The number is not a prime number\n");
       }

    return 0;



}
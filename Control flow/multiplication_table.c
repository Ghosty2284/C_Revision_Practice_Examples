// Code to generate multiplication table for any number

#include<stdio.h>

int main(){

    int x, i=0,t=0;

    printf("Enter the number\n");
    scanf("%d",&x);

    for(i=0;i<11;i++){

        t =x*i;
        printf("%d*%d=%d\n",x,i,t);

    }

    return 0;

}
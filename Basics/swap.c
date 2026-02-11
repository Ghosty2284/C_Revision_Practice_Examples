#include<stdio.h>

int main(){

    int a , b,temp;

    printf("Enter value of a :\n");
    scanf("%d",&a);
    printf("Enter value of b :\n");
    scanf("%d",&b);
printf("a=%d & b=%d\n",a,b);
     temp = a;
     a=b;
     b=temp;

     printf("a=%d & b=%d\n",a,b);
     printf("Numbers are swapped !!!\n");
     return 0;
     
    
}
// Write a C program to print biggest number .

#include<stdio.h>
int main()
{
    int num1,num2,num3;
    int biggest;

    printf("Enter numbers= ");
    scanf("%d %d %d",&num1,&num2,&num3);

    biggest=num1;

    if(num2>biggest)
    {
        biggest=num2;
    }
    if(num3>biggest)
    {
        biggest=num3;
    }

    printf("Biggest number is= %d",biggest);
}
// Write a c program to check if number is divisible by 2 or not.

#include<stdio.h>

int main()
{
    int n;

    printf("Enter number= ");
    scanf("%d",&n);

    if(n%2==0)
    {
        printf("%d is divisible by 2",n);
    }
    else
    {
        printf("%d is not divisible by 2",n);
    }
    return 0;
}
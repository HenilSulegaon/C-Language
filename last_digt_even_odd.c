// Write a C program to find last digit of number is even or odd.

#include<stdio.h>
int main()
{
    int n;
    printf("Enter num= ");
    scanf("%d",&n);

    if((n%10)%2==0)
    {
        printf("Last digit is %d \n",n%10);
        printf("Last digit is even");
    }
    else
    {
        printf("Last digit is %d \n",n%10);
        printf("Last digit is odd.");
    }
}
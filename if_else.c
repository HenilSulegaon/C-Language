// Write a C program to decide a number is greater than 9 and less than 100. ( 2 digit number )

#include<stdio.h>
int main()
{
    int num;

    printf("Enter number= ");
    scanf("%d",&num);

    if(num>9 && num<100)
    {
        printf("%d",num);
    }
    else
    {
        printf("Please enter valid number");
    }
}
/* Write a C program for number is positive or negative and even or odd .
          USING NESTED IF STATEMENT 
*/

#include<stdio.h>

int main()
{
    int num;
    printf("Enter number= ");
    scanf("%d",&num);

    if(num>=0)
    {
        printf("Positive number.\n");
        if(num%2==0)
        {
            printf("Even number.\n");
        }
        else
        {
            printf("Odd number.\n");
        }
    }
    else
    {
        printf("Negative number.\n");
    }
    return 0;
}
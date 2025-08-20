//Keep taking numbers as input from user until user enters an odd number.

#include<stdio.h>
int main()
{
    int n;
    while(1)
    {
        printf("Enter number= ");
        scanf("%d",&n);
        if(n%2!=0)
        {
            break;
        }
    }
}
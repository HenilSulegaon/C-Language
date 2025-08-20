// Write a program to print patterns
/*
    *
    **
    ***
    ****
    *****
*/

#include<stdio.h>
int main()
{
    int n;
    printf("Enter any num=");
    scanf("%d",&n);

    for(int r=1;r<=n;r++)
    {
        for(int c=1;c<=r;c++)
        {
            printf("*");
        }
        printf("\n");
    }
}
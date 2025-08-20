// Write a program to print patterns
/*
   55555
   4444
   333
   22
   1
*/

#include<stdio.h>
int main()
{
    int n;
    printf("Enter num=");
    scanf("%d",&n);

    for(int r=n;r>=1;r--)
    {
        for(int c=1;c<=r;c++)
        {
            printf("%d",r);
        }
        printf("\n");
    }
}
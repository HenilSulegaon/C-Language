// Write a program to print patterns
/*
   1
   22
   333
   4444
   55555
*/

#include<stdio.h>
int main()
{
    int n;
    printf("Enter n= ");
    scanf("%d",&n);

    for(int r=1;r<=n;r++)
    {
        for(int c=1;c<=r;c++)
        {
            printf("%d",r);
        }
        printf("\n");
    }
}
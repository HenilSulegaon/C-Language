//  Write a program to print patterns
/*
    12345
    1234
    123
    12
    1
*/

#include<stdio.h>
int main()
{
    int n;
    printf("Enter number= ");
    scanf("%d",&n);

    for(int r=n;r>=1;r--)
    {
        for(int c=1;c<=r;c++)
        {
            printf("%d",c);
        }
        printf("\n");
    }
}
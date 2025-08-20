// Write a program to print patterns
/*
   ABCDE
   ABCD
   ABC
   AB
   A
*/

#include<stdio.h>
int main()
{
    int n;
    printf("Enter num=");
    scanf("%d",&n);

    for(int r=n;r>=1;r--)
    {
        for(int c=0;c<r;c++)
        {
            printf("%c",'A'+c);
        }
        printf("\n");
    }
}
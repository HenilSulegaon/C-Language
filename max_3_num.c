// Write a C program for find maximum out of three numbers.

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter numbers= ");
    scanf("%d %d %d",&a,&b,&c);

    if(a>b)
    {
        if(a>c)
        {
            printf("Max num is %d",a);
        }
        else
        {
            printf("Max num is %d",c);
        }
    }
    else// b>a
    {
        if(b>c)
        {
            printf("Max num is %d",b);
        }
        else
        {
            printf("Max num is %d",c);
        }
    }
    return 0;
}
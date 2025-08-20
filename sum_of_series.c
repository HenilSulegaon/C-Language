// Write a C program to find 1+1/2+1/3+1/4+….+1/n.

#include<stdio.h>
int main()
{
    float n;
    float sum=0;
    printf("Enter number=");
    scanf("%f",&n);

    for(int i=1;i<=n;i++)
    {
        sum=sum+(1.0/i);
    }
    printf("final sum is %f \n",sum);
    return 0;
}
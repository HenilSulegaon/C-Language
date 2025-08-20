// Print the sum of first n numbers .

#include<stdio.h>

int main()
{
    int n;
    int sum=0;
    printf("Enter number= ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("Sum of %d is=%d",n,sum);
    return 0;
}
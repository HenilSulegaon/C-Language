// Write a c program to check whether number is prime or not .

#include<stdio.h>
int main()
{
    int n;
    printf("Enter num=");
    scanf("%d",&n);

    if(n<=1)
    {
        printf("%d is prime.\n",n);
    }
        for(int i=2;i<=n;i++)
        {
            if(n%i==0)
            {
                printf("%d is not prime.\n",n);
                break;
            }
            else
            {
                printf("%d is prime.\n",n);
                break;
            }
        }
}
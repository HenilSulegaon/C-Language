// Write a C program to find sum and average of different numbers input by user as many as user wants.

#include<stdio.h>
int main()
{
    float no;
    float num;
    float sum=0;
    float avg;

    printf("Enter total num= ");
    scanf("%f",&no);

    for(int i=1;i<=no;i++)
    {
        printf("Enter num=");
        scanf("%f",&num);

        sum=sum+num;
        avg=sum/no;
    }

    printf("Sum is=%f \n",sum);
    printf("Average=%f \n",avg);
}
// Write a C program to convert fahrenhit from centigrade (f = 1.8*c+32)

#include<stdio.h>

int main()
{
    float f,c;

    printf("Enter temp. in centigrade= ");
    scanf("%f",&c);

    f=1.8*c+32;

    printf("Temp of %f in fehr is=%f",c,f);
}
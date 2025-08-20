/*
Write a program to calculate simple interest.
si = simple interest
p =principal amount
r =rate of interest
n =number of years
*/

#include<stdio.h>
int main()
{
    float si;
    float p,r,n;

    printf("Enter Principal amount= ");
    scanf("%f",&p);
    printf("Enter Rate of interest= ");
    scanf("%f",&r);
    printf("Enter time duration= ");
    scanf("%f",&n);

    si=(p*r*n)/100;

    printf("Simple Interest=%f",si);
    return 0;
}


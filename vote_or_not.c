/*
Write a C program to determine person is capable for vote or not !
use if else statement
*/

#include<stdio.h>

int main()
{
    int age;
    printf("Enter your age= ");
    scanf("%d",&age);

    if(age>=18)
    {
        printf("You can vote.\n");
    }
    else
    {
        printf("Sorry you can't vote.\n");
    }
    return 0;
}
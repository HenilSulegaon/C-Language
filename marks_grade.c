// Write a C program to indicate grade of students .

#include<stdio.h>

int main()
{
    int marks;
    printf("Enter your marks= ");
    scanf("%d",&marks);

    if(marks>=90)
    {
        printf("Grade A++");
    }
    else if(marks>=80 && marks<90)
    {
        printf("Grade A");
    }
    else if(marks>=60 && marks<80)
    {
        printf("Grade B");
    }
    else if(marks>=40 && marks<60)
    {
        printf("Grade C");
    }
    else if(marks>=33 && marks<40)
    {
        printf("Grade D");
    }
    else
    {
        printf("Fail.Keep working hard.You will definetly pass.\n");
    }
}
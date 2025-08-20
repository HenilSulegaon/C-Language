// Write a C program for Switch Statement . (Days in Week)

#include<stdio.h>

int main()
{
    int day;
    printf("Enter a day(1-7): ");
    scanf("%d",&day);

    switch(day)
    {
        case 1: printf("Mon");
        break;
        case 2: printf("Tue");
        break;
        case 3: printf("Wed");
        break;
        case 4: printf("Thur");
        break;
        case 5: printf("Fri");
        break;
        case 6: printf("Sat");
        break;
        case 7: printf("Sun");
        break;
        default: printf("Please Enter valid day!!!");
        
    }
}
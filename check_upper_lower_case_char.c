// Write a C program to check character is Upper case or lower case .

#include<stdio.h>

int main()
{
    char ch;
    printf("Enter any character= ");
    scanf("%c",&ch);

    if(ch>='A' && ch<='Z')
    {
        printf("Upper Case");
    }
    else if(ch>='a' && ch<='z')
    {
        printf("Lower Case");
    }
    else
    {
        printf("Invalid Character");
    }
    return 0;
}
#include<stdio.h>

int main()
{
    int height,base,area;

    printf("Enter height= ");
    scanf("%d",&height);
    printf("Enter base= ");
    scanf("%d",&base);

    area=0.5*height*base;

    printf("Area of Triangle= %d\n",area);
    return 0;
}
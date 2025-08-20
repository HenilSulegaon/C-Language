// Lowest age among ages in array.

#include<stdio.h>
int main()
{
    int age[]={12,45,67,4,76,90};
    int len=sizeof(age)/sizeof(age[0]);

    int lowestAge=age[0];

    for(int i=0;i<len;i++)
    {
        if(age[i]<lowestAge)
        {
            lowestAge=age[i];
        }
    }
    printf("LowestAge=%d",lowestAge);
}
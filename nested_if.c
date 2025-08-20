// Read five persons height and weight and count the number of person having height greater than 170 and weight less than 50.

#include<stdio.h>
int main()
{
    int person,height,weight;
    int cnt=0;
    printf("Enter num of person= ");
    scanf("%d",&person);

    for(int i=1;i<=person;i++)
    {
        printf("Enter height= ");
        scanf("%d",&height);
        printf("Enter weight= ");
        scanf("%d",&weight);

        if(height>170)
        {
            if(weight>50)
            {
                cnt=cnt+1;
            }
        }
    }
    printf("Count=%d",cnt);
}
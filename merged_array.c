// Merging of 2 arrays in another array.

#include<stdio.h>
int main()
{
    int arr1[3]={1,2,3};
    int arr2[5]={4,5,6,7,8};
    int arr3[8];

    for(int i=0;i<3;i++)
    {
        arr3[i]=arr1[i];
    }
    for(int i=0;i<5;i++)
    {
        arr3[i+3]=arr2[i];
    }

    for(int i=0;i<8;i++)
    {
      printf("%d",arr3[i]);
    }
}
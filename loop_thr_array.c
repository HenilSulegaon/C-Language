
#include<stdio.h>
int main()
{
    int arr[]={18,45,7,77,63,1,99};
    int len=sizeof(arr)/sizeof(arr[0]);

    printf("Size of arr is %d",len);

    for(int i=0;i<=len;i++)
    {
        printf("%d \n",arr[i]);
    }
    return 0;
}
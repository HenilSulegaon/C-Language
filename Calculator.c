#include<stdio.h>
int main()
{
    int a,b;
    int add,sub,mul,div,mod,Inc,Dec;

    printf("Enter first number= ");
    scanf("%d",&a);
    printf("Enter second number= ");
    scanf("%d",&b);

    add= a+b;
    printf("Addition of %d and %d is %d\n",a,b,add);
    sub=a-b;
    printf("Subtraction of %d and %d is %d\n",a,b,sub);
    mul=a*b;
    printf("Multiplication of %d and %d is %d\n",a,b,mul);
    div=a/b;
    printf("Division of %d and %d is %d\n",a,b,div);
    mod=a%b;
    printf("Modulus of %d and %d is %d\n",a,b,mod);
    Inc=a++;
    printf("Increment of %d is %d\n",a,Inc);
    Dec=a--;
    printf("Decrement of %d is %d\n",a,Dec);

    return 0;

}
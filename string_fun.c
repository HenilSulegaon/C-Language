// strlen(),strcpy(),strcat(),strcmp()

#include<stdio.h>
#include<string.h>

int main()
{
char name[]="Henil";
char nickname[]="Manu";

int len=strlen(name);
printf("Length of name=%d\n",len);

strcat(name,nickname);
printf("%s\n",name);
printf("%d\n",strcmp(name,nickname));

}
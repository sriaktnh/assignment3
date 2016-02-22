#include<stdio.h>
#include<string.h>
int main()
{
char str[20];
char rev[20];
int i=1,j=0;
printf("enter any string");
scanf("%s",&str);
while(str[++i]!='\0');
while(i>0)
rev[j++]=str[--i];
rev[j]='\0';
printf("reverse of string is:%s",rev);
return 0;
}

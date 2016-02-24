#include<stdio.h>


 int sort1(int a[],int n)
{
int i=0,temp=0,j;
for(i=0;i<n;i++)
for(j=0;j<n;j++)
{
if(a[j]>=a[j+1])
{
 temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;

}
}
for(i=0;i<n;i++)
printf("%d\t",a[i]);
return;
}

#include<stdio.h>
extern int sort1(int a[],int n);


void main()
{
int i,n;
int a[10];
printf("enter the size");
scanf("%d",&n);
printf("give arry elements:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
sort1(a,n);

}

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

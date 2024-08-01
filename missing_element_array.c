#include<stdio.h>
int main()
{
int a[20], i,j,n,flag=0;
printf("\nEnter the range of elements: ");
scanf("%d",&n);
printf("\nEnter array elements within the specified range: ");
for(i=0;i<n-1;i++)
{
scanf("%d",&a[i]);
}
for(j=1;j<=n;j++)
{
for(i=0;i<n-1;i++)
{
if(a[i]!=j)
{
flag=1;
continue;
}
else
{
flag=0;
break;
}
}
if(flag==1)
printf("\nMissing element is %d",j);
}
return 0;
}

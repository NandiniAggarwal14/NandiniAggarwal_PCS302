#include<stdio.h>
int main()
{
int a[20], i,n,res;
printf("\nEnter the size of array: ");
scanf("%d",&n);
printf("\nEnter array elements within the specified range: ");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n-1;i++)
{
res=a[i]^a[i+1];
}
printf("\nThe odd occuring element is : %d",a[res]);
return 0;
}

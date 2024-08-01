#include<stdio.h>
int main()
{
int a[20], i,n,sum=0, esum;
printf("\nEnter the range of elements: ");
scanf("%d",&n);
printf("\nEnter array elements within the specified range: ");
for(i=0;i<n-1;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
sum=sum+a[i];
}
esum=(n*(n+1))/2;
printf("\nThe missing element is %d", esum-sum);
return 0;
}

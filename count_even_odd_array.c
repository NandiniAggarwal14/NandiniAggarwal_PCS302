#include<stdio.h>
int main()
{
int a[20], i,n, ce=0, co=0;
printf("\nEnter the number of array elements: ");
scanf("%d",&n);
printf("\nEnter the array elements: ");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]%2==0)
ce++;
else
co++;
}
printf("\nTHe number of even elemnts are:%d",ce);
printf("\nTHe number of odd elemnts are:%d",co);
return 0;
}

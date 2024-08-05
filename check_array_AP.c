#include<stdio.h>
int main()
{
int a[20], i, n, d1, d2, flag=0;
printf("\nEnter number of array elements: ");
scanf("%d",&n);
if(n<=2)
{
printf("\nThe series is too short to be called a sequence");
}
else
{
printf("\nEnter array elements: ");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
d1=a[1]-a[0];
for(i=1;i<n-1;i++)
{
d2=a[i+1]-a[i];
if(d1!=d2)
{
flag=1;
break;
}
}
if(flag==1)
printf("\nIt is not an AP");
else
printf("\nIt is an AP");
}
return 0;
}

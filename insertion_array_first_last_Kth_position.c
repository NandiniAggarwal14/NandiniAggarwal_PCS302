#include<stdio.h>
#include<stdlib.h>
int main()
{
int *p, n, k, i, num;

printf("\nEnter the number of elements : ");
scanf("%d",&n);
p=(int *)malloc(n*sizeof(int));
printf("\nEnter the array elements: ");
for(i=0;i<n;i++)
{
scanf("%d", (p+i));
}
printf("\nThe array elements are: ");
for(i=0;i<n;i++)
{
printf("%d", *(p+i));
}
printf("\nEnter the element to be inserted in the beginning: ");
scanf("%d",&num);
for(i=n-1;i>=0;i--)
{
*(p+i+1)=*(p+i);
}
*(p+0)=num;
n++;
printf("\nThe array after insertion a first is: ");
for(i=0;i<n;i++)
{
printf("%d", *(p+i));
}
printf("\nEnter the element to be inserted at last : ");
scanf("%d",&num);
*(p+n)=num;
n++;
printf("\nThe array after insertion a last is: ");
for(i=0;i<n;i++)
{
printf("%d", *(p+i));
}
printf("\nEnter the Kth position where element is to inserted: ");
scanf("%d",&k);
printf("\nEnter the element to be inserted at this place : ");
scanf("%d",&num);
for(i=n-1;i>=k-1;i--)
{
*(p+i+1)=*(p+i);
}
*(p+(k-1))=num;
n++;
printf("\nThe array after insertion at Kth place is: ");
for(i=0;i<n;i++)
{
printf("%d", *(p+i));
}
return 0;
}

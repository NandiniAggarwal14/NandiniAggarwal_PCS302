#include<stdio.h>
#include<stdlib.h>
int main()
{
int *p,*q, n, k, i;

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
for(i=0;i<=n;i++)
{
*(p+i)=*(p+i+1);
}
n--;
printf("\nArray after deletion at first: ");
for(i=0;i<n;i++)
{
printf("%d ",*(p+i));
}
n--;
printf("\nThe array after deletion at last is: ");
for(i=0;i<n;i++)
{
printf("%d", *(p+i));
}
printf("\nEnter the Kth position where element is to be deleted: ");
scanf("%d",&k);
for(i=k-1;i<n;i++)
{
*(p+i)=*(p+i+1);
}
n--;
printf("\nThe array after deletion at Kth place is: ");
for(i=0;i<n;i++)
{
printf("%d", *(p+i));
}
free(p);
return 0;
}


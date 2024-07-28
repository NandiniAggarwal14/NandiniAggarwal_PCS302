#include<stdio.h>
void reverse(int [], int);
int main()
{
int a[10], n, i;
printf("\nEnter the number of elements : ");
scanf("%d",&n);
printf("\nEnter the array elements: ");
for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
printf("\nThe array elements are: ");
reverse(a,n);
return 0;
}
void reverse(int a[], int n)
{
    static int i=n;
    if(i>=0)
    {
        printf("%d ",a[i]);
        i=i-1;
        reverse(a,i);
    }
}

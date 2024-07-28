#include<stdio.h>
int main()
{
    int a[10], n, i, j, k;
    printf("\nEnter the number of elements : ");
    scanf("%d",&n);
    printf("\nEnter the array elements: ");
    for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
    printf("\nEnter the Kth place: ");
    scanf("%d",&k);
    for(i=k-1;i<n;i=i+k-1)
    {
        for(j=i;j<n;j++)
        {
            a[j]=a[j+1];
        }
        n--;
    }
    printf("\nThe array elements are: ");
    for(i=0;i<n;i++)
        {
            printf("%d ",a[i]);
        }
}

#include<stdio.h>
int main()
{
    int a[20], tmp[20], i,n,j=0;
    printf("\nEnter the number of array elements: ");
    scanf("%d",&n);
    printf("\nEnter the array elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            tmp[j++]=a[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            tmp[j++]=a[i];
        }
    }
    printf("\nElements of rearranged array are:\n");
    for(i=0;i<j;i++)
    {
        printf("%d ",tmp[i]);
    }
    return 0;
}

#include<stdio.h>
int main()
{
    int a[20], positive[20],negative[20], zero[20], i,n,j=0,k=0,l=0;
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
            negative[j++]=a[i];
        }
        else if(a[i]>0)
        {
            positive[k++]=a[i];
        }
        else
        {
            zero[l++]=a[i];
        }
    }
    printf("\nElements of positive array are:\n");
    for(i=0;i<j;i++)
    printf("%d ",positive[i]);
    printf("\nElements of negative array are:\n");
    for(i=0;i<k;i++)
    printf("%d ",negative[i]);
    printf("\nElements of zero array are:\n");
    for(i=0;i<l;i++)
    printf("%d ",zero[i]);
    return 0;
}

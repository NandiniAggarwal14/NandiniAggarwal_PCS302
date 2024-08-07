#include <stdio.h>
int main() 
{
    int n, a[20], i, d, term =-1;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);
    }
    d = (a[n-1] - a[0]) / n; 
    for ( i = 0; i < n - 1; i++) 
    {
        if (a[i+1] != a[i] + d) 
        {
            term = a[i] + d;
            break;
        }
    }
    if (term == -1) 
    {
        printf("\nThe sequence is not an AP with one missing term");
    } 
    else 
    {
        printf("\nThe new AP series is: ");
        for ( i = 0; i < n; i++) 
        {
            printf("%d ", a[i]);
            if ( term == a[i] + d) 
            {
                printf("%d ", term );
            }

        }
    }
    return 0;
}

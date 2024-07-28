#include <stdio.h>

int main() 
{
    int n, m, i, j, k, l;
    int a[10], b[10], union_arr[20], intersection_arr[10];
    int u_count = 0, i_count = 0;
    printf("Enter the number of elements in array a: ");
    scanf("%d", &n);
    printf("Enter the elements of array a:\n");
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the number of elements in array b: ");
    scanf("%d", &m);
    printf("Enter the elements of array b:\n");
    for (i = 0; i < m; i++) 
    {
        scanf("%d", &b[i]);
    }
    for (i = 0; i < n; i++) 
    {
        union_arr[u_count++] = a[i];
    }
    for (i = 0; i < m; i++) 
    {
        int flag = 0;
        for (j = 0; j < n; j++) 
        {
            if (b[i] == a[j]) 
            {
                flag = 1;
                break;
            }
        }
        if (flag==0) 
        {
            union_arr[u_count++] = b[i];
        }
    }
    for (i = 0; i < n; i++) 
    {
        for (j = 0; j < m; j++) 
        {
            if (a[i] == b[j]) 
            {
                int flag = 0;
                for (k = 0; k < i_count; k++) 
                {
                    if (intersection_arr[k] == a[i]) 
                    {
                        flag = 1;
                        break;
                    }
                }
                if (flag==0) 
                {
                    intersection_arr[i_count++] = a[i];
                }
            }
        }
    }
    printf("Union of arrays a and b:\n");
    for (i = 0; i < u_count; i++) 
    {
        printf("%d ", union_arr[i]);
    }
    printf("\n");
    printf("Intersection of arrays a and b:\n");
    for (i = 0; i < i_count; i++) 
    {
        printf("%d ", intersection_arr[i]);
    }
    printf("\n");
    return 0;
}

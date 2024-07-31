#include <stdio.h>
int main() {
    int a[20], n, i, j, found = 0;
    printf("\nEnter the number of array elements: ");
    scanf("%d", &n);

    printf("\nEnter array elements: ");
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++) 
    {
        for (j = 0; j < i; j++) 
        {
            if (a[i] == a[j]) 
            {
                found++;
                if (found == 4) 
                {
                    printf("\nFourth repeating element is: %d\n", a[i]);
                    break;
                }
            }
        }
    }
    return 0;
}

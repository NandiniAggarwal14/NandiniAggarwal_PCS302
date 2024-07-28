#include <stdio.h>

int main() 
{
    int n, i, j, arr[10], frequency[10]={0};
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++) 
    {
        if (frequency[i] == 0) 
        { 
            int count = 1;
            for (j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) 
                {
                    count++;
                    frequency[j] = -1; 
                }
            }
            frequency[i] = count;
        }
    }
    printf("Element\tFrequency\n");
    for (i = 0; i < n; i++) 
    {
        if (frequency[i] != -1) 
        {
            printf("%d\t%d\n", arr[i], frequency[i]);
        }
    }

    return 0;
}

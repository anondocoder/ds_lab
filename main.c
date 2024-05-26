#include "stdio.h"

int main()
{
    int n;
    printf("Enter the length of array: ");
    scanf("%d", &n);

    int arr[100];

    // Getting input elements for array from user
    for(int i = 0; i < n; i++)
    {
        printf("arr[%d]: ", i+1);
        scanf("%d", &arr[i]);
    }

    int item ,k;

    // Getting item and position for insert.....
    printf("\nEnter item and position for insert..: ");
    scanf("%d %d", &item, &k);

    for (int j = n; j >= k-1; j--)
    {
        arr[j] = arr[j-1];
    }
    arr[k-1] = item;

    n++;

    // Printing array
    for(int i = 0; i < n; i++)
    {
        printf("arr[%d]: %d\n", i+1, arr[i]);
    }

    return 0;
}



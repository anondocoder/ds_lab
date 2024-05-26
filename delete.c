#include "stdio.h"

int main()
{
    int n;
    printf("Please enter number of elements in an array: ");
    scanf("%d", &n);

    int arr[100];

    printf("Please enter %d elements of an array\n", n);

    // Getting input elements for array from user
    for(int i = 0; i < n; i++)
    {
        printf("arr[%d]: ", i+1);
        scanf("%d", &arr[i]);
    }


    int item ,k;

    // Getting item and position for insert.....
    printf("\nPlease enter a valid Index position of a element that you want to delete: ");
    scanf("%d", &k);

    for (int j = k-1; j <= n-1; j++)
    {
        arr[j] = arr[j+1];
    }

    n--;

    printf("\nFinal Array after deleting an Array Elements\n");

    // Printing array
    for(int i = 0; i < n; i++)
    {
        printf("arr[%d]: %d\n", i+1, arr[i]);
    }

    return 0;
}



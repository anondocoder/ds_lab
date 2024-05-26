#include "stdio.h"

int main()
{
    int temp, data[8], pass = 1, k = 0;
    printf("Before sorting we had:\n");
    for(k = 0; k < 8; k++)
    {
        scanf("%d", &data[k]);
    }
    for(pass = 1; pass < 8; pass++)
    {
        for(k=0; k < (8-pass);k++)
        {
            if (data[k]>data[k+1])
            {
                temp = data[k];
                data[k] = data[k+1];
                data[k+1] = temp;
            }
        }
    }
    printf("\nAfter sorting in ascending order:\n");
    for(k=0;k<8;k++)
    {
        printf("%d ", data[k]);
    }
    return 0;
}

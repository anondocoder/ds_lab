#include "stdio.h"

int main()
{
    int item, data[7] = {11,13,14,10,54,12,20}, loc = -1, k;
    printf("Searching item = ");
    scanf("%d", &item);
    for(k=0;k<7;k++)
    {
        if(data[k] == item)
        {
            loc = k + 1;
            break;
        }
    }
    if(loc >= 0)
        printf("Successful and %d location",loc);
    else
        printf("Search is unsuccessful");
    return 0;
}

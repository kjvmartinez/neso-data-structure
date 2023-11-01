/*
The function realloc() is used to change the size of memory block without losing the data. If the new size of memory is less than the old size data might be lost.
Parameters (address_to_resize, new_size)
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n;
    // Memory allocation for two integers
    int *ptr = (int *)malloc(2 * sizeof(int));
    if (ptr == NULL)
    {
        printf("Memory not available.");
        exit(1);
    }
    printf("Enter the 2 number of integers: \n");
    for (i = 0; i < 2; i++)
    {
        scanf("%d", ptr + i);
    }

    // Memory allocation for two more integers
    ptr = (int *)realloc(ptr, 4 * sizeof(int));
    if (ptr == NULL)
    {
        printf("Memory not available.");
        exit(1);
    }
    printf("Enter 2 more integers: \n");
    for (i = 2; i < 4; i++)
    {
        scanf("%d", ptr + i);
    }

    for (i = 0; i < 4; i++)
    {
        printf("%d ", *(ptr + i));
    }
    return 0;
}
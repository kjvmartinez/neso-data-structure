/*
The function realloc() is used to change the size of memory block without losing the data. If the new size of memory is less than the old size data might be lost.
Parameters (address_to_resize, new_size)
*/

#include <stdio.h>
#include <stdlib.h>

int *input()
{
    int *ptr, i;
    ptr = (int *)malloc(5 * sizeof(int));
    printf("Enter 5 integers: \n");
    for (i = 0; i < 5; i++)
        scanf("%d", ptr + i);
    return ptr;
}

int main()
{
    int i, sum = 0;
    int *ptr = input();
    for (i = 0; i < 5; i++)
        sum += *(ptr + i);

    printf("The sum is %d \n", sum);
    free(ptr); // free the memory allocated for ptr
    ptr = NULL;
    return 0;
}
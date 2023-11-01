/*
The function malloc() is from the library <stdlib.h> it is use for dynamic single block memory allocation before compile time. The memory is fixed and cannot be increased during runtime.
This function will return void.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n;
    printf("Enter the number of integers: ");
    scanf("%d", &n); // store in variable n
    int *ptr = (int *)malloc(n * sizeof(int));
    if (ptr == NULL)
    {
        printf("Memory not available.");
        exit(1);
    }
    for (i = 0; i < n; i++)
    {
        printf("Enter an integer: ");
        scanf("%d", ptr + i); // store in the address no & symbol
    }

    for (i = 0; i < n; i++)
    {
        printf("%d ", *(ptr + i));
    }
    return 0;
}
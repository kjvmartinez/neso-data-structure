#include <stdio.h>
#include <stdlib.h>

struct point
{
    int x;
    int y;
};

struct point *fun(int a, int b)
{
    // allocate memory at heap. fixed size for the size of struct point
    // after the fxn execution heap memory is still intact.
    struct point *ptr = (struct point *)malloc(sizeof(struct point));
    ptr->x = a;
    ptr->y = b + 5;
    return ptr;
}

void print(struct point *ptr)
{
    printf("%d %d\n", ptr->x, ptr->y);
}

int main()
{
    struct point *ptr1, *ptr2;
    ptr1 = fun(2, 3);
    ptr2 = fun(6, 9);
    print(ptr1);
    print(ptr2);
    free(ptr1); // deallocate memory
    free(ptr2);
    return 0;
}
/*
If the structure is large pass the address instead of the whole structure.
*/
#include <stdio.h>

struct point
{
    int x;
    int y;
};

void print(struct point *ptr)
{
    printf("%d %d \n", ptr->x, ptr->y);
}

int main()
{
    struct point p1 = {23, 45};
    struct point p2 = {56, 90};
    print(&p1);
    print(&p2);
    return 0;
}
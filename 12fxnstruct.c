/*
Node representation
Creating a node
*/

#include <stdio.h>
#include <stdlib.h>
// we can have multiple data but only one node
struct node
{
    int data;
    struct node *link;
};

int main()
{
    struct node *head = NULL;                          // pointer to the head
    head = (struct node *)malloc(sizeof(struct node)); // type casting is not required
    head->data = 45;
    head->link = NULL;

    printf("%d", head->data);
    return 0;
}

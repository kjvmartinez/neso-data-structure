#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

int main()
{
    // first node
    struct node *head = NULL; // pointer to the head
    head = (struct node *)malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    printf("%d %p \n", head->data, head->link);
    // second node
    struct node *current = (struct node *)malloc(sizeof(struct node));
    current->data = 98;
    current->link = NULL;
    head->link = current; // change from null to current address to link the nodes

    //  third node
    current = (struct node *)malloc(sizeof(struct node));
    current->data = 3;
    current->link = NULL;

    head->link->link = current; // updating the link of the 2nd node

    printf("%d %p \n", head->data, head->link);
    printf("%d %p \n", current->data, current->link);

    return 0;
}
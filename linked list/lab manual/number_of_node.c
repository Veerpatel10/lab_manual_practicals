#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct node
{
    int data;
    struct node *next;
};

void travelsel(struct node *head)
{
    // struct node ptr = head;
    while (head != NULL)
    {
        printf("Element  : %d\n", head->data);
        head = head->next;
    }
}

struct node *beginsertion(struct node *head)
{
    struct node *new = (struct node *)malloc(sizeof(struct node));
    new->next = head;
    new->data = 0;
    head = new;
    return head;
}

struct node *sortinsertion(struct node *head, int item)
{
    struct node *new = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    struct node *q = p->next;
    while (q->data <= item)
    {
        p = p->next;
        q = q->next;
    }
    //new->next=p->next;
    p->next = new;
    new -> next = q;
    new -> data = item;
    return head;          
    
}

struct node *insertion(struct node *head, int item,int pos)
{
    int count=1;
    struct node *new = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    struct node *q = p->next;
    while (count < pos)
    {
        p = p->next;
        q = q->next;
        count++;
    }
    p->next = new;
    new -> next = q;
    new -> data = item;
    return head;
}

struct node *insertion_at_end(struct node *head)
{
    struct node *new1 = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = new1;
    new1->data = 9;
    new1->next = NULL;
    return head;
}

struct node *count_node(struct node *head)
{
    int count = 1;
    struct node *p = head;
    while (p->next!=NULL)
    {
        p = p -> next;
        count++;
    }

    return count;
    
}


int main()
{
    int num;
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *second = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));
    struct node *forth = (struct node *)malloc(sizeof(struct node));

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 5;
    third->next = forth;

    forth->data = 8;
    forth->next = NULL;
    
    travelsel(head);
    printf("\n-------------------------------\n");
    num = count_node(head);
    printf("\n-------------------------------\n");
    printf("Number of Node : %d",num);
    return 0;
}
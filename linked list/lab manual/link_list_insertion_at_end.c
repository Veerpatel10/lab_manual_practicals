#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct node
{
    int data;
    struct node *next;
};

void travelsel(struct node*head)
{
    //struct node ptr = head;
    while (head!=NULL)
    {
        printf("Element  : %d\n",head->data);
        head = head->next;
    }
}

struct node * insertion(struct node*head)
{
    struct node *new = (struct node*)malloc(sizeof(struct node));
    new->next=head;
    new->data=0;
    head = new;
    return head;

}

struct node *insertion_at_end(struct node*head)
{
    struct node *new1 = (struct node*)malloc(sizeof(struct node));
    struct node *p = head;
    while (p->next != NULL)
    {
        p = p -> next;
    }
    p -> next = new1;
    new1->data=9;
    new1 -> next = NULL;
    return head;
}

int main()
{
    struct node *head = (struct node*)malloc(sizeof(struct node));
    struct node *second = (struct node*)malloc(sizeof(struct node));
    struct node *third = (struct node*)malloc(sizeof(struct node));
    struct node *forth = (struct node*)malloc(sizeof(struct node));

    head->data = 1;
    head->next = second;
    
    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = forth;

    forth->data = 4;
    forth->next = NULL;

    travelsel(head);
    printf("\n-------------------------------\n");
    head = insertion_at_end(head);
    printf("\n-------------------------------\n");
    travelsel(head);
    return 0;
}
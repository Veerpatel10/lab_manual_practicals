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
    head = insertion(head);
    printf("\n-------------------------------\n");
    travelsel(head);
    return 0;
}
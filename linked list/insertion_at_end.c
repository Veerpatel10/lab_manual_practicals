#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct Node
{
    int data ;
    struct Node * next;
};

void linklisttrav(struct Node * ptr)
{
    while (ptr!=NULL)
    {
    printf("data : %d \n",ptr->data);
    ptr = ptr -> next;
    }
}

struct Node * insertion_at_begining(struct Node * head , int data)
{
    struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr -> next = head;
    ptr -> data = data;
    return ptr;
}

struct Node * insert_in_between(struct Node *head,int data,int index)
{
    struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));
    struct Node *p = head;
    int i =0;
    while (i!=index-1)
    {
        p = p->next;
        i++;
    }
    ptr -> next = p -> next;
    ptr -> data = data;
    p->next = ptr;
    return head;
}

struct Node * insertion_at_end(struct Node * head,int data)
{
    struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));
    struct Node *p = head;
    while(p->next!=NULL)
    {
        p = p -> next;
    }
    p -> next = ptr;
    ptr -> data = data;
    ptr -> next = NULL;
    return head;
}

int main()
{
    struct Node * head;
    struct Node * second;
    struct Node * third;
    struct Node * last;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    last = (struct Node *)malloc(sizeof(struct Node));

    head -> data = 1;
    head -> next = second;
    second -> data = 2;
    second -> next = third;
    third -> data = 3;
    third -> next = last;
    last -> data = 4;
    last -> next = NULL;
    linklisttrav(head);
    // head = insertion_at_begining(head,6);
    // printf("\n-----------Data after insertion at begining-------- \n");
    // linklisttrav(head);
    // printf("\n-----------Data after insertion in between-------- \n");
    // head = insert_in_between(head,10,2);
    // insert_in_between(head,10,2);
    printf("\n-----------Data after insertion at end-------- \n");
    head = insertion_at_end(head,11);
    linklisttrav(head);
    return 0;
}

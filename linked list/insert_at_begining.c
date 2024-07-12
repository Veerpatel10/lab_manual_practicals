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
    head = insertion_at_begining(head,6);
    printf("\n-----------Data after insertion at begining-------- \n");
    linklisttrav(head);
    return 0;
}

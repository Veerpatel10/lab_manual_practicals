#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct Node
{
    struct Node* pre;
    int data;
    struct Node* next;
};
void linklisttrav(struct Node * ptr)
{
    while (ptr!= NULL)
    {
    printf("Element : %d\n",ptr->data);
    ptr = ptr -> next;
    }
}
void linklistrevtrav(struct Node * ptr)
{
    while (ptr!= NULL)
    {
    printf("Element : %d\n",ptr->data);
    ptr = ptr -> pre;
    }
}

int main()
{
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    struct Node* second = (struct Node*)malloc(sizeof(struct Node));
    struct Node* third = (struct Node*)malloc(sizeof(struct Node));
    struct Node* last = (struct Node*)malloc(sizeof(struct Node));

    head->pre=NULL;
    head->data=1;
    head->next=second;
 
    second->pre=head;
    second->data=2;
    second->next=third;
 
    third->pre=second;
    third->data=3;
    third->next=last;
 
    last->pre=third;
    last->data=4;
    last->next=NULL;

    linklisttrav(head);
    printf("\n----------------\n");
    linklistrevtrav(last);
    return 0;
}
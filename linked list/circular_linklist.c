#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node * next;
};
void linklisttrav(struct Node * head)
{
    struct Node * ptr = head;
    while (ptr->next!=head)
    {
    printf("Element : %d\n",ptr->data);
    ptr = ptr -> next;
    }
    printf("Element : %d\n",ptr->data);

}

int main()
{
    struct Node * head;
    struct Node * second;
    struct Node * third;
    struct Node * forth;
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    forth = (struct Node *)malloc(sizeof(struct Node));
    head -> data = 71;
    head -> next = second;
    second -> data = 72;
    second -> next = third;
    third -> data = 73;
    third -> next = forth;
    forth -> data = 74;
    forth -> next = head;
    linklisttrav(head);
    return 0;
}
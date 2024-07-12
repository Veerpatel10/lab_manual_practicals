#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node* next;
};
void linklisttrav(struct Node* ptr)
{
    while (ptr != NULL)
    {
        printf("Element : %d\n", ptr->data);
        ptr = ptr->next;
    }
}

struct Node* delete_last_node(struct Node* head)
{
    struct Node* p = head;
    struct Node* q = p->next;
    while (q->next!=NULL)
    {
        p=p->next;
        q=q->next;
    }
    p->next=NULL;
    free(q);
    return head;
}

int main()
{
    struct Node* head;
    struct Node* second;
    struct Node* third;
    struct Node* forth;
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    forth = (struct Node*)malloc(sizeof(struct Node));
    head->data = 71;
    head->next = second;
    second->data = 72;
    second->next = third;
    third->data = 73;
    third->next = forth;
    forth->data = 74;
    forth->next = NULL;
    linklisttrav(head);
    printf("\n-------After deletion of last node---------\n");
    head =delete_last_node(head);
    linklisttrav(head);
    return 0;
}
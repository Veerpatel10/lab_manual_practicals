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

struct Node* delete_a_Node_with_given_value(struct Node* head, int data)
{
    struct Node* p = head;
    struct Node* q = p->next;
    while (q->data != data && q->next != NULL)
    {
        q = q->next;
        p = p->next;
    }
    if (q->data == data)
    {
        p->next = q->next;
        free(q);
    }
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
    printf("\n-------After deletion a node with given value---------\n");
    head = delete_a_Node_with_given_value(head, 72);
    linklisttrav(head);
    return 0;
}
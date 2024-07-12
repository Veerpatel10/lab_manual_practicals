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
struct Node * inserion_in_sorted_linklist(struct Node* head, int item)
{
    struct Node* p = head;
    struct Node* p1 = p->next;
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    while (p1->data < item)
    {
        p = p->next;
        p1 = p1->next;
    }
    ptr->next = p->next;
    p->next = ptr;
    ptr->data = item;
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
    third->data = 74;
    third->next = forth;
    forth->data = 75;
    forth->next = NULL;
    linklisttrav(head);
    printf("\n-------After insertion---------\n");
    head = inserion_in_sorted_linklist(head,73);
    linklisttrav(head);
    return 0;
}
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
void search(struct Node* head, int item)
{
    int flag = 0;
    int count = 1;
    struct Node* p = head;
    while (p != NULL)
    {
        if (p->data == item)
        {
            printf("Element fount at at node number : %d\n", count);
            flag = 1;
            break;
        }
        p = p->next;
        count++;
    }
    if (flag == 0)
    {
        printf("Search was unsucessful\n");
    }
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
    search(head, 73);
    search(head, 79);
    return 0;
}
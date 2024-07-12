#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct queue
{
    int size;
    int f;
    int r;
    int *arr;
};
int isfull(struct queue *q)
{
    if (q->r == q->size-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isempty(struct queue *q)
{
    if (q->r == q->f)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void insertion(struct queue *q)
{
    if(isfull(q))
    {
        printf("queue is full\n");
    }
    else
    {
        int num2;
        printf("Enter the number to insert : ");
        scanf("%d",&num2);
        q->r++;
        q->arr[q->r]=num2;
        if (q->f==-1)
        {
            q->f = 0;
        }
        
    }
}
void deletion(struct queue *q)
{
    if(isempty(q))
    {
        printf("Queue is empty\n");
    }
    else
    {
        int num1;
        num1 = q->arr[q->f];
        q->f++;
    }
}
void display(struct queue *q)
{
    if (isempty(q))
    {
        printf("Queue is empty\n");
    }
    else
    {
        for (int i = q->f; i <= q->r; i++)
        {
            printf("The number in queue  : %d \n",q->arr[i]);
        }
        
    }
}
int main()
{
    struct queue q;
    int num;
    q.size=5;
    q.f=q.r=-1;
    q.arr = (int *)malloc(q.size*sizeof(int));    
    printf("1.insertion \n2.deletion \n3.display");
    while (1)
    {
        printf("\nEnter the number : ");
        scanf("%d", &num);
        switch (num)
        {
        case 1:
            insertion(&q);
            break;
        case 2:
            deletion(&q);
            break;
        case 3:
            display(&q);
            break;
        case 4:
            exit(0);
        default:
            break;
        }

    }
    return 0;
}
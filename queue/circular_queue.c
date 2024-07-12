#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int rear = -1, front = -1, a[5];
void insertion(int item)
{
    // if (rear >= 4)
    // {
    //     printf("-----Insertion can not be done-----\n");
    //     printf("queue is in overflow condition");
    // }
    // else
    // {
        
    if (rear == 4)
    {
        rear = 0;
    }
    else
    {
        rear++;
    }
    // rear++;
    a[rear] = item;
    if (front == -1)
    {
        front = 0;
    }
    // }
}
void deletetion()
{
    int item;
    if (front == 4)
    {
        front = 0; 
    }
    else
    {
        item = a[front];
        if (front == rear)
        {
            front = rear = -1;
        }
        front++;
        printf("The deteted item is : %d", item);
    }

}
void display1()
{
    int i;

    if (front == -1 && rear == -1)
    {
        printf("Queue is underflow\n");
    }
    else
    {
        for (i = 0; i <= 4; i++)
        {
            printf("front : %d rear : %d  = %d \n", i, rear, a[i]);
        }
    }
}

int main()
{
    int num, item;
    printf("1.insertion \n2.deletion \n3.display");
    while (1)
    {
        printf("\nEnter the number : ");
        scanf("%d", &num);
        switch (num)
        {
        case 1:
            printf("Enter the number to insert : ");
            scanf("%d", &item);
            insertion(item);
            break;
        case 2:
            deletetion();
            break;
        case 3:
            display1();
            break;
        case 4:
            exit(0);
        default:
            break;
        }

    }

    return 0;
}
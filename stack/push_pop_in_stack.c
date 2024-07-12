#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int top = -1;
void push(int s[], int item)
{
    if (top >= 5)
    {
        printf("\nStack is overflow\n");
        exit(0);
    }
    top = top + 1;
    s[top] = item;
}
void pop(int s[])
{
    if (top == -1)
    {
        printf("\nStack is underflow\n");
        exit(0);
    }
    printf("pop element is : %d", s[top]);
    top = top - 1;
}
void display(int s[])
{
    int i;
    for (i = top; i >= 0; i--)
    {
        printf("number at top %d : %d\n",i,s[i]);
    }
}
int main()
{
    int num1, s[5], item;
    while (1)
    {
        printf("\n-------Stack-------\n");
        printf("Enter the number\n1 -> push\n2 -> pop\n3 -> display\n4 -> exit\n");
        scanf("%d", &num1);
        switch (num1)
        {
        case 1:
            printf("Enter the item to insert : ");
            scanf("%d", &item);
            push(s, item);
            break;
        case 2:
            pop(s);
            break;
        case 3:
            display(s);
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("\nEnter a proper number\n");
            break;
        }
    }
}
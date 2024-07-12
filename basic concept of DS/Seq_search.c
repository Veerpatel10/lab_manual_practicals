// #include<stdio.h>
// #include<conio.h>
// void main()
// {
//     int a[5], num1, j=0;
//     for (int i = 0; i < 5; i++)
//     {
//         printf("Enter the element at index number %d : ", i);
//         scanf("%d", &a[i]);
//     }
//     printf("Enter the element to search :");
//     scanf("%d", &num1);
//     a[5]=num1;
//     while (a[j] != num1)
//     {
//         j++;
//     }
//     if (j == 5)
//     {
//         printf("Unsuccessful Search");
//     }
//     else
//     {
//         printf("successful Search at index number %d \n",j);
//     }

// }

// ----------------OR------------------//

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
    int a[5],num1,j=0;
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the element at index number %d : ",i);
        scanf("%d",&a[i]);
    }
    printf("enter the number to search : ");
    scanf("%d",&num1);
    for(j=0;j<5;j++)
    {
        if (a[j]==num1)
        {
            printf("successful search at index number %d",j);
            exit(0);
        }
    }
    printf("Unsuccessful search");
}
// #include<stdio.h>
// #include<conio.h>
// void main()
// {
//     int a[10];
//     int b, c, temp;
//     printf("Enter the number of index to use : ");
//     scanf("%d", &b);

//     for (int i = 0; i < b; i++)
//     {
//         printf("Enter the number at index %d :", i);
//         scanf("%d", &a[i]);
//     }
//     printf("Printing the array\n");
//     for (int i = 0; i < b; i++)
//     {
//         printf("The number at index %d : %d \n", i, a[i]);
//     }
//     printf("Enter the index number where to insert the new number : ");
//     scanf("%d", &c);
//     temp = b - 1;
//     while (temp >= c)
//     {
//         a[temp + 1] = a[temp];
//         temp = temp - 1;
//     }
//     printf("Enter the number to insert : ");
//     scanf("%d", &a[c]);
//     b=b+1;

//     printf("\nPrinting the array\n");
//     for (int i = 0; i < b; i++)
//     {
//         printf("The number at index %d : %d \n", i, a[i]);
//     }

// }

// ------------------or----------------//

#include<stdio.h>
#include<conio.h>
void get_array(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Enter the number at index number %d : ", i);
        scanf("%d", &a[i]);
    }
}
void print_array(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("The number at index number %d : %d \n", i, a[i]);
    }
}
int insert(int a[], int n1, int n2, int c)
{
    if (n1 >= c)
    {
        return -1;
    }
    
    int temp, n3;
    temp = n1 - 1;
    while (temp >= n2)
    {
        a[temp + 1] = a[temp];
        temp = temp - 1;
    }
    printf("Enter the number to insert : ");
    scanf("%d", &n3);
    a[n2] = n3;
    return 1;
}
void main()
{
    int a[10], num1, num2;
    printf("Enter the number of element to use : ");
    scanf("%d", &num1);
    get_array(a, num1);
    print_array(a, num1);
    printf("Enter the index number to insert a number : ");
    scanf("%d", &num2);
    insert(a, num1, num2,10);
    num1 = num1 + 1;
    print_array(a,num1);
}
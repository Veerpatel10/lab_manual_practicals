// #include<stdio.h>
// #include<conio.h>
// int main()
// {
//     int a[10],num1,num2,temp;
//     printf("Enter the number of index to use : ");
//     scanf("%d",&num1);
//     printf("\n----Enter the array----\n");
//     for (int i = 0; i < num1; i++)
//     {
//         printf("Enter the number at index %d : ",i);
//         scanf("%d",&a[i]);
//     }
//     printf("\n----Printing the array----\n");
//     for (int i = 0; i < num1; i++)
//     {
//         printf("The number at index %d : %d \n",i,a[i]);
//     }

//     printf("Enter the index number to delete : ");
//     scanf("%d",&num2);
//     temp = num2;
//     while (temp<=num1-1)
//     {
//         a[temp]=a[temp+1];
//         temp = temp + 1;
//     }
//     num1 = num1 - 1;

//     printf("\n----Printing the array----\n");
//     for (int i = 0; i < num1; i++)
//     {
//         printf("The number at index %d : %d \n",i,a[i]);
//     }

// }




// ------------------OR----------------------//



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
int deletion(int a[], int n1, int n2, int c)
{
    if (n1 >= c)
    {
        return -1;
    }
    
    int temp, n3;
    temp = n1 - 1;
    while (temp >= n2)
    {
        a[n2] = a[n2+1];
        n2 = n2 + 1;
    }
    return 1;
}
void main()
{
    int a[10], num1, num2;
    printf("Enter the number of element to use : ");
    scanf("%d", &num1);
    get_array(a, num1);
    print_array(a, num1);
    printf("Enter the index number to delet a number : ");
    scanf("%d", &num2);
    deletion(a, num1, num2,10);
    num1 = num1 - 1;
    print_array(a,num1);
}
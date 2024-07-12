#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int a[10];
    int low = 0;
    int mid, num1,n,i;
    printf("Enter the number of index to use : ");
    scanf("%d",&n);
    int high = n-1;
    for ( i = 0; i < n; i++)
    {
        printf("Enter the array element at index number %d : ",i);
        scanf("%d",&a[i]);
    }
    
    printf("Enter the number to search in array : ");
    scanf("%d", &num1);
    while (low <= high)
    {
        // printf("hello");
        mid = (low + high) / 2;
        // printf("%d\n",mid);
        if (a[mid] < num1)
        {
            low = mid + 1;
        }
        else if (a[mid] > num1)
        {
            high = mid - 1;
        }
        else
        {
            printf("\nNumber found successfully at index number %d : %d\n",mid,a[mid]);
            exit(0);         
        }
    }
    printf("\n--------Unsuccessfull search--------\n");
    return 0;
}                                                                                               
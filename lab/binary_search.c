#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int a[10], num1, low = 0, i, mid, num2;
    printf("Enter the number of element to use : ");
    scanf("%d", &num1);
    int high = num1 - 1;
    for (i = 0; i < num1; i++)
    {
        printf("Enter the number at index number %d : ", i);
        scanf("%d", &a[i]);
    }
    printf("Enter the number to search : ");
    scanf("%d", &num2);

    while (low <= high)
    {
        mid = (low + high) / 2;
        if (a[mid] < num2)
        {
            low = mid + 1;
        }
        else if (a[mid] > num2)
        {
            high = mid - 1;
        }
        else
        {
            printf("\nThe number found successfully at index number %d : %d\n",mid,a[mid]);
            exit(0);
        }
    }

return 0;
}

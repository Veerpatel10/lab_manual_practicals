#include<stdio.h>
#include<conio.h>
int a[10];

int partition(int a[], int low, int high)
{
    int pivit = a[low];
    int i = low + 1;
    int j = high;
    int temp;
    while (i < j)
    {
        while (a[i] <= pivit)
        {
            i++;
        }
        while (a[j] > pivit)
        {
            j--;
        }
        if (i < j)
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
    temp = a[j];
    a[j] = a[low];
    a[low] = temp;

    return j;
}

void quick_sort(int a[], int low, int high)
{
    int partition_ind;
    int pivit = a[low];
    int i = low + 1;
    int j = high;
    int temp;
    if (low < high)
    {
        // partition(a, low, high);
        while (i < j)
        {
            while (a[i] <= pivit)
            {
                i++;
            }
            while (a[j] > pivit)
            {
                j--;
            }
            if (i < j)
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
        temp = a[j];
        a[j] = a[low];
        a[low] = temp;
        quick_sort(a, low, j - 1);
        quick_sort(a, j + 1, high);
    }
}

int main()
{
    int i, n = 10;
    printf("Enter the array : \n");
    for (i = 0; i < n; i++)
    {
        printf("Enter the number at index number %d : ", i);
        scanf("%d", &a[i]);
    }
    printf("\n----------------------------\n");
    printf("The entered array is : \n");
    for (i = 0; i < n; i++)
    {
        printf("The number at index number %d : %d \n", i, a[i]);
    }
    quick_sort(a, 0, n - 1);
    printf("\n----------------------------\n");
    printf("The sorted array is : \n");
    for (i = 0; i < n; i++)
    {
        printf("The number at index number %d : %d \n", i, a[i]);
    }
    return 0;
}
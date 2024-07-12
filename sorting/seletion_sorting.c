#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10], i, j, temp, n , minindex;
    printf("Enter the size of hte array : ");
    scanf("%d", &n);
    printf("Enter the array : \n");
    for (i = 0; i < n; i++)
    {
        printf("Enter the number at index number %d : ", i);
        scanf("%d", &a[i]);
    }
    // int j;
    for (i = 0;i < n;i++)
    {
        minindex = i;
        for (j = i + 1 ; j < n ; j++)
        {
            if (a[minindex] > a[j])//(a[i] > a[j]) //
            {
                minindex = j;
                // temp = a[i];
                // a[i] = a[j];
                // a[j] = temp;
                // printf(".\n");
            }
        }
        temp = a[i];
        a[i] = a[minindex];
        a[minindex] = temp;
        // i++;

    }

    printf("\n----------------------------\n");
    printf("The sorted array is : \n");
    for (i = 0; i < n; i++)
    {
        printf("The number at index number %d : %d \n", i, a[i]);
    }
    return 0;
}

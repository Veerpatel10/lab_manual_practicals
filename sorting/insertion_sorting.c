#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10],i,j,key;
    printf("Enter the array : \n");
    for (i = 0; i < 10; i++)
    {
        printf("Enter the element at index number %d : ",i);
        scanf("%d",&a[i]);
    }

    i=1;
    while (i<10)
    {
        key = a[i];
        j = i - 1;
        while (key<a[j] && j>=0)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
        i++;
    }
    
    printf("The shorted array is : \n");
    for (i = 0; i < 10; i++)
    {
        printf("The element at index number %d : %d \n",i,a[i]);
    }
    return 0;
}
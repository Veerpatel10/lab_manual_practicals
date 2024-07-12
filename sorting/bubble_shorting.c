#include<stdio.h>
#include<conio.h>
int a[10];
void bubble_sorting()
{
    int pass, last, k, temp;
    for (pass = 0; pass < 10; pass++)
    {
        int e = 0;
        last = 10;
        printf("number of passes : %d\n",pass);
        for (k = 0; k < last-1; k++)
        // for (k = 0; k < last-1-pass; k++)
        {
            if (a[k] > a[k + 1])
            {
                temp = a[k];
                a[k] = a[k + 1];
                a[k + 1] = temp;
                e++;
            }
        }
        if (e == 0) //
        {
            return;
        }
        else
        {
            last = last - 1;
        }
        
        
    }

}
int main()
{
    int i;
    printf("------Enter the element to be sorted--------\n");
    for (i = 0; i < 10; i++)
    {
        printf("Enter the element at index number %d : ", i);
        scanf("%d", &a[i]);
    }
    bubble_sorting();
    printf("------The element after sorting--------\n");
    for (i = 0; i < 10; i++)
    {
        printf("The element at index number %d : %d\n", i, a[i]);
    }

}
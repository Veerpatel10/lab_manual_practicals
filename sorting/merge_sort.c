#include<stdio.h>
#include<conio.h>
void set(int a[])
{
    printf("\n---Enter the number in sorted manner---\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the number at index number %d : ",i);
        scanf("%d",&a[i]);
    }
    
}

void get(int a[],int n)
{
    printf("\nThe array in sorted manner is : \n");
    for (int i = 0; i < n; i++)
    {
        printf("The number at index number %d : %d\n",i,a[i]);
    }
}

int *merge_sort(int a[],int b[],int c[])
{
    int i,j,k;
    i=j=k=0;
    while (i<5 && j<5)
    {
        if (a[i]<b[i])
        {
            c[k]=a[i];
            i++;
            k++;
        }
        else
        {
            c[k]=b[j];
            j++;
            k++;
        }
        while (i<5)
        {
            c[k]=a[i];
            i++;
            k++;
        }
        while (j<5)
        {
            c[k]=b[j];
            j++;
            k++;
        }
            
    }
    return c;
}
int main()
{
    int a[5],b[5],c[10];
    set(a);
    printf("\n\n");
    set(b);
    printf("\n\n");
    get(a,5);
    printf("\n\n");
    int *d = merge_sort(a,b,c);
    printf("\n\n");
    get(d,10);

    return 0;

}
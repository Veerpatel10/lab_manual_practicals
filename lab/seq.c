#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int a[10],i,num1,num2;
    printf("\nEnter the array\n");
    printf("Enter the number of elements to use : ");
    scanf("%d",&num1);
    for ( i = 0; i < num1; i++)
    {
        printf("Enter the number at index number %d : ",i);
        scanf("%d",&a[i]);
    }
    printf("Enter the number to search : ");
    scanf("%d",&num2);
    for ( i = 0; i < num1; i++)
    {
        if (a[i]==num2)
        {
            printf("\nThe number found successfully at index number %d : %d\n",i,a[i]);
            exit(0);
        }
        
    }
    printf("\n Unsuccessfull search \n");
    
    return 0;
}

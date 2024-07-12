#include<stdio.h>
#include<conio.h>
int main()
{
    char a[10];
    int count = 0;
    printf("enter the name : ");
    gets(a);
    while (a[count]!=NULL)
    {
        count++;
    }
    
    printf("The length of the string is : %d\n",count);
    return 0;
}
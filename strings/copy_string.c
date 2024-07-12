#include<stdio.h>
#include<conio.h>
int main()
{
    char a1[5],a2[5];
    int count =0;
    printf("Enter the string : ");
    gets(a1);
    while (a1[count]!=NULL)
    {
        a2[count]=a1[count];
        count++;
    }
    a2[count]=NULL;
    printf("The copy string is : ");
    puts(a2);
}
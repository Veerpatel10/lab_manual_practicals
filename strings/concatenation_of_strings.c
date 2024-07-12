#include<stdio.h>
#include<conio.h>
int main()
{
    char a1[5], a2[5], a3[10];
    int count1 = 0, count2 = 0;
    printf("Enter the first sting : ");
    gets(a1);
    printf("Enter the second sting : ");
    gets(a2);
    while (a1[count1]!=NULL)
    {
        a3[count2]=a1[count1];
        count1++;
        count2++;
    }
    a3[count2]=' ';
    count2++;
    count1 = 0;
    while (a2[count1]!=NULL)
    {
        a3[count2]=a2[count1];
        count1++;
        count2++;
    }
    a3[count2]=NULL;
    printf("The concatenated string is : ");
    puts(a3);
    return 0;
    
}
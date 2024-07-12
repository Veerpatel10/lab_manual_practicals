#include<stdio.h>
#include<conio.h>
int main()
{
    char a1[10],a2[10];
    int pos,num,count1 = 0,count2 = 0;
    printf("Enter the string : ");
    gets(a1);
    printf("Enter the position from where to delete : ");
    scanf("%d",&pos);
    printf("Enter the number of element to delete : ");
    scanf("%d",&num);
    while (count1 < pos)
    {
        a2[count1]=a1[count2];
        count1++;
        count2++;
    }
    while (num>0)
    {
        count2++;
        num--;
    }
    while (a1[count2]!=NULL)
    {
        a2[count1]=a1[count2];
        count1++;
        count2++;
    }
    a2[count1]=NULL;
    printf("The string after deleting is : ");
    puts(a2);
    return 0;

}
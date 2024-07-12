#include<stdio.h>
#include<conio.h>
int main()
{
    char a1[5],a2[5],a3[10];
    int num,count1 = 0,count2 = 0;
    printf("Enter the first string : ");
    gets(a1);
    printf("Enter the second string : ");
    gets(a2);
    printf("Enter the position to insert the string : ");
    scanf("%d",&num);
    while (count1 < num)
    {
        a3[count1]=a1[count1];
        count1++;
    }
    while (a2[count2]!=NULL)
    {
        a3[count1]=a2[count2];
        count1++;
        count2++;
    }
    while (a1[num]!=NULL)
    {
        a3[count1]=a1[num];
        count1++;
        num++;
    }
    a3[count1]=NULL;
    printf("The inserted string is : ");
    puts(a3);
    return 0;
    
}
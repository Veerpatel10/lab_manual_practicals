#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char a1[10], a2[5];
    int count1 = 0,count2;
    printf("Enter the First sting :");
    gets(a1);
    printf("Enter the second sting :");
    gets(a2);
    // while (a1[count]!=NULL)
    // {
    //     count++;
    // }
    count2 = strlen(a1);
    // printf("%d",count2);
    // count2++;
    a1[count2]=' ';
    count2++;
    while (a2[count1]!=NULL)
    {
        a1[count2]=a2[count1];
        count1++;
        count2++;
    }
    a1[count2]=NULL;
    printf("The Append string is : ");
    puts(a1);
    return 0;
}
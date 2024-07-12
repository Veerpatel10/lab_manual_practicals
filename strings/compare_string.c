#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char a1[5],a2[5];
    int count = 0;
    printf("Enter the first string : ");
    gets(a1);
    printf("Enter the second string : ");
    gets(a2);
    int len1 = strlen(a1);
    int len2 = strlen(a2);
    if (len1 != len2)
    {
        printf("Strings are not equal\n");
        exit(0);
    }
    while (count <len1)
    {
        if (a1[count]!=a2[count])
        {
            printf("Strings are not equal\n");
            exit(0);
        }
        count++;
    }
    printf("Both the Strings are equal\n");
    return 0;
}
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    char str1[5],str2[5],str3[5];
    // printf("Enter the string 1 : ");
    // scanf("%s",&str1);
    printf("Enter the string 2 : ");
    gets(str2);
    printf("Enter the string 3 : ");
    for (int i = 0; i < 5; i++)
    {
        str3[i]=getchar();
    }
    
    printf("\n--------------------------------\n");
    // printf("The string 1 : %s",str1);
    printf("The string 2 : ");
    puts(str2);
    printf("The string 3 : ");
    for (int i = 0; i < 5; i++)
    {
        putchar(str3[i]);
    }
    
}

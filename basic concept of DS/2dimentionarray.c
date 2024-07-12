#include<stdio.h>
#include<conio.h>
int main()
{
    int a[4][4],i,j;
    // printf("\n-------Enter the Row and column of the array------\n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            // a[i][j]=a[i][j]+(a[i][j]*a[i][j]);
            printf("[%d][%d]\n",i,j);
        }
        
    }
    printf("\n------------------\n");
    for (j = 0; j < 4; j++)
    {
        for (i = 0; i < 4; i++)
        {
            // a[i][j]=a[i][j]+(a[i][j]*a[i][j]);
            printf("[%d][%d]\n",i,j);
        }
        
    }

    return 0;    
}
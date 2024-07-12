#include<stdio.h>
#include<stdlib.h>
struct pra1
{
    int total_s;
    int use_s;
    int* ptr;

};
void create_array(struct pra1 *a,int ts,int us)
{
    a->total_s=ts;
    a->use_s=us;
    a->ptr = (int *)malloc(ts*sizeof(int));
}
void show(struct pra1 *a)
{
    for (int i = 0; i < a->use_s; i++)
    {
        printf("%d\n",(a->ptr)[i]);
    }
    
}
void set(struct pra1 *a)
{
    // int n;
    for (int i = 0; i < a->use_s; i++)
    {
        printf("Enter the number on index number %d : ",i);
        scanf("%d",&((a->ptr)[i]));
        // n = (a->ptr)[i];
    }
    
}
void main()
{
    struct pra1 a1;
    create_array(&a1,10,2);
    set(&a1);
    show(&a1);
}
/******************************************************************************

LL Create and display

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
}*first=NULL;
void create(int a[],int size)
{
    int i;
    struct Node *t,*last;//last to tract last node ,t to track present node
    first=(struct Node *)malloc(sizeof(struct Node));
    first->data=a[0];
    first->next = NULL;
    last = first;
    for(i=1;i<size;i++)
    {
        t =(struct Node*)malloc(sizeof(struct Node));
        t->data=a[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}
void display(struct Node *p)
{
    while(p!=NULL)
    {
        printf("%d",p->data);
        p=p->next;
    }
}
int main()
{
    int a[]={1,2,3,4,5,6};
    create(a,6);
    display(first);

    return 0;
}

#include<iostream>
#include<bits/stdc++.h>

//#include<stdlib>
using namespace std;

struct Node
{
  int data;
  struct Node *next;
} *first = NULL,*head2=NULL;

void create(int A[], int n)
{
    struct Node *last,*thiss;
    first = (struct Node*)malloc(sizeof(struct Node*));
    first->data = A[0];
    first->next = NULL;
    last = first;
    for(int i=1;i<n;i++)
    {
        thiss = (struct Node*)malloc(sizeof(struct Node*));
        thiss->data = A[i];
        thiss->next = NULL;
        last->next = thiss;
        last = thiss;
    }
}
void display(struct Node* p)
{
    while(p!=NULL)
    {
        std::cout<<p->data<<" ";
        p = p->next;
    }
 cout<<endl;
}
void count(struct Node* c) //O(n) space - O(1)
{
    int count=0;
    while(c)
    {
        count++;
        c=c->next;
    }
    cout<<count<<endl;
}
int Rcount(struct Node* rc) // Recursive count
{
    int cnt=0;
    if(rc==NULL)
    {
        return 0;
    }
    else
    {
      return Rcount(rc->next)+1;
    }
}
int sum(struct Node* Q)
{
    int sum=0;
    while(Q!=NULL)
    {
        sum = sum + Q->data;
        Q = Q->next;
    }
     return sum;
}
int Rsum(struct Node* S)
{
    int sum=0;
    if(S==NULL)
    {
        return 0;
    }
    else
    {
     return Rsum(S->next)+S->data;
    }
}
int Max(struct Node* M)
{
    int max;
    max = M->data;
    M = M->next;
    while(M!=NULL)
    {
        if(M->data>max)
        {
            max = M->data;
        }
        M = M->next;
    }
    return max;
}
void Lsearch(struct Node* se,int ele)
{
    int flag=0,element=0;
    while(se!=NULL)
    {
        if( ele == se->data)
        {
            flag = 1;
            element = se->data;
            break;
        }
        se = se->next;
    }
    if(flag==1)
    {
        cout<<"element found "<<element<<endl;
    }
    else if(flag==0)
    {
        cout<<"Not found "<<endl;
    }
}
int Rsearch(struct Node* l1,int key)
{
    if(l1==NULL)
    {
        return NULL;
    }
    else if(key==l1->data)
    {
         return l1->data;
    }
    else
    {
        return Rsearch(l1->next,key);
    }
}
//Move to head method for easier Linear Search
struct Node* Lsearch2(struct Node* l2,int key) 
{
    struct Node* q; // Tail pointer to follow the path of the previous node of Node pointer
    while(l2!=NULL)
    {
         if(key==l2->data)
         {
            q->next = l2->next;
            l2->next = first;
            first = l2;
            return l2;

         }
         q=l2; //for tracking of precious node if key not found
         l2 = l2->next;
    }
    return NULL;
}
int main()
{
    int arr[] = {1,2,3,8,44,6,4,4};
    create(arr,8);
    cout<<"Created linked list"<<endl;
    display(first);
    cout<<"displayed"<<endl;
    count(first);
    cout<<"counted"<<endl;
    cout<<Rcount(first)<<endl;
    cout<<"counted"<<endl;
    cout<<sum(first)<<endl;
    cout<<Rsum(first)<<endl;
    cout<<"Max element: "<<Max(first)<<endl;
    Lsearch(first,6);
    //cout<<endl;
    Rsearch(first,4)?cout<<"Element found "<<Rsearch(first,4):cout<<"Not found";
    cout<<endl;
    struct Node* temp;
    head2=first;
    temp = Lsearch2(first,1);
    cout<<temp->data;
    return 0;
}
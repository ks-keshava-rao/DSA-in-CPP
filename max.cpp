#include<bits/stdc++.h>
using namespace std;
void max(int arr[],int l)
{
    int maxi=arr[0];
 for(int i=1;i<l;i++)
 {
     if(arr[i]<maxi)
     maxi=arr[i];
 }
 cout<<"maximum"<<" "<<maxi;
}
int main()
{
    int *ptr;
    int size;
    cin>>size;
    ptr = (int*)malloc(sizeof(int)*size);
    for(int i=0;i<size;i++)
    {
        cin>>ptr[i];
    }    
    for(int i=0;i<size;i++)
    {
        cout<<ptr[i];
    }
    cout<<endl;
    max(ptr,size);
}
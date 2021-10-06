/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<string>
using namespace std;
class rectangle
{
    public:
    int len;
    int bre;
    int area()
    {
        return len*bre;
    }
    int peri()
    {
        return 2*(len+bre);
    }
};
int main()
{
    rectangle *ptr = new rectangle;
    //rectangle *ptr;
    //ptr=&r1;
    ptr->len=10;
    ptr->bre=5;
    cout<<ptr->area()<<" "<<ptr->peri();
    return 0;
}

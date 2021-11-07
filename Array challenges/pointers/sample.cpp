#include <iostream>
using namespace std;
int main()
{
    int a=20;
    int *aptr;
    aptr=&a;
    cout<<&a<<endl;
    cout<<aptr<<endl;

    cout<<*aptr<<endl;
    *aptr=30;
    cout<<*aptr<<endl;
    int arr[]={1,2,3,4};
    cout<<*arr<<endl;

    int *ptr=arr;
    for (int i = 0; i < 4; i++)
    {
        cout<<*ptr<<endl;
        ptr++;
    }
    cout<<endl;
    for (int i = 0; i < 4; i++)
    {
        cout<<*(arr+i)<<endl;
    }
    
    
    
    return 0;
}
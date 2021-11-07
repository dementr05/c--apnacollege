#include <iostream>
using namespace std;
int max(int *a, int *b){
    // int temp=*a;
    if (*a>*b)
    {
        return *a;
    }
    else
    {
        return *b;
    }
    
    
}
int main()
{
    int a,b;
    cin>>a>>b;
    
    cout<<"Maximum no. is "<<max(&a,&b);
    return 0;
}
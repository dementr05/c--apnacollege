#include <iostream>
using namespace std;
void swap(int *a,int *b) { 
    int temp=*a;
    *a=*b;
    *b=temp;

}
int main()

{
    int a=4;
    int b=7;
    cout<<"Initial value of a and b:"<<endl;
        cout<<a<<" "<<b<<endl;

    // 
    
    // or we can done by this method and
    swap(&a,&b);
    
    cout<<"after swap"<<endl;
    cout<<a<<" "<<b<<endl;
    return 0;
}
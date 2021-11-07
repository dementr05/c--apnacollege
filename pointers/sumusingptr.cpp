#include <iostream>
using namespace std;
int main()
{
    int n,m;
    cout<< "Enter the two numbers: "<<endl;
    cin>>n>>m;
    int sum1 =0;
    int *ptr1 = &n;
    int *ptr2 = &m;
    sum1 += *ptr1+*ptr2;
    cout<<sum1<<endl;
    return 0;
}
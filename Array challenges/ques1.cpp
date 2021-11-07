#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
    // max till i
    int mx = -199999;
    int n;
    cout<<"Enter the no. of elemnts of the array: ";
    cout<<endl;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];

    }
    for (int i = 0; i < n; i++)
    {
        mx= max(mx,arr[i]);
        cout<<"Max no. in the position "<<i+1<<" "<<mx<<endl;

    }
    
    
    return 0;
}
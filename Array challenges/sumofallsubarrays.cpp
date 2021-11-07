#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of the array: "<<endl;
    cin>>n;
    int a[n];
    int sum=0;
    int total=0;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    for(int i = 0;i<n;i++){
        sum=0;
        for(int j=i;j<n;j++){
        sum += a[j];
        cout<<"Sum of the subarrays: "<<sum<<endl;  
        total += sum;
        }
    }
    cout<<"Total sum: "<< total<<endl;
    return 0;
}
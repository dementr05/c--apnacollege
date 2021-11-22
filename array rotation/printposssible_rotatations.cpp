#include <iostream>
using namespace std;
void preprocess(int arr[], int n, int temp[]){
    for (int i = 0; i < n; i++)
    {
        temp[i]= temp[i+n] = arr[i];
    }
    
}
void leftrotate(int arr[], int n, int k, int temp[]){
    int start = k%n;
    for (int i = start; i < start+n; i++)
    {
        cout<<temp[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int temp[2*n];
    preprocess(arr,n,temp);
    int k1,k2,k3,k4;
    cin>>k1>>k2>>k3>>k4;
    leftrotate(arr,n,k1,temp);
    leftrotate(arr,n,k2,temp);
    leftrotate(arr,n,k3,temp);
    leftrotate(arr,n,k4,temp);
    return 0;
}
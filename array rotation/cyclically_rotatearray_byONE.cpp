#include <iostream>
using namespace std;
void rotateONE(int arr[], int n){
    int x = arr[n-1];
    for (int i = n-1; i > 0; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[0]=x;
}

void rotateTWO(int arr[], int n){
    int i =0, j= n-1;
    while (i != j)
    {
        swap(arr[i], arr[j]);
        i++;
    }
    
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
    int arr2[] = {1,2,3,4,5};
    rotateONE(arr, n);
    cout<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;    
    rotateTWO(arr2, n);

    for (int i = 0; i < n; i++)
    {
        cout<<arr2[i]<<" ";
    }
    

    return 0;
}
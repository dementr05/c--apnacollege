#include <iostream>
using namespace std;
void swap(int arr[], int fi, int si, int d){
    int i, temp;
    for (  i = 0; i < d; i++)
    {
        temp = arr[fi+i];
        arr[fi+i] = arr[si+i];
        arr[si+i] = temp;
    }
}

void leftRotate(int arr[], int d, int n){
    if (d==0 || d==n)
    {
        return;
    }

    if (n-d == d)
    {
        swap(arr,0,n-d,d);
        return;
    }
    
    // If A is shorter
    if (d < n-d)
    {
        swap(arr,0,n-d,d);
        leftRotate(arr,d,n-d);
    }
    else{
        // If B is shorter
        swap(arr,0,d,n-d);
        leftRotate(arr +n -d, 2 * d -n,d);
    }
    
}

void printArray(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
int main()
{
    int no;
    cin>>no;
    int arr[no];

    for(int i=0; i<no; i++)
    cin>>arr[i];
    int d;
    cin>>d;

    leftRotate(arr,d,no);
    printArray(arr,no);
    return 0;
}
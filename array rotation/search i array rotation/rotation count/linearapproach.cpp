#include <iostream>
using namespace std;
int countrotation(int arr[], int n){
    int min = arr[0], min_index=0;
    for (int i = 0; i < n; i++)
    {
        if (min>arr[i])
        {
            min = arr[i];
            min_index = i;
        }
        
    }
    return min_index;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<< countrotation(arr,n);
    return 0;
}
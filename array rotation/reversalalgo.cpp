#include <iostream>
using namespace std;

void reverseArray(int arr[], int start, int end)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void leftRotate(int arr[], int d, int n)
{
    if (d == 0)
    {
        return;
    }
    d = d % n;
    reverseArray(arr, 0, d - 1);
    reverseArray(arr, d, n - 1);
    reverseArray(arr, 0, n - 1);
}
void printarray(int a[], int size)
{
    for (int i = 0; i < size; i++)
        cout << a[i] << " ";
}
int main()
{
    int no;
    cout << "Enter the number of elements of the array" << endl;
    cin >> no;

    int arr[no];
    cout << "Enter the elements of the array" << endl;
    for (int i = 0; i < no; i++)
    {
        cin >> arr[i];
    }
    int d;
    cout << "Enter the rotation size i.e. d :" << endl;
    cin >> d;
    cout << "Intial array is:" << endl;
    printarray(arr, no);
    leftRotate(arr, d, no);
    cout<<endl;
    cout<<"Final array after rotation is:" << endl;

    printarray(arr, no);

    return 0;
}
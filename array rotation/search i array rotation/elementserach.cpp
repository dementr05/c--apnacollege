#include <iostream>
using namespace std;
int BinarySearch(int arr[], int low, int high, int key)
{
    if (high < low)
    {
        return -1;
    }
    int mid = (low + high) / 2;
    if (key == arr[mid])
    {
        return mid;
    }
    if (key > arr[mid])
    {
        return BinarySearch(arr, (mid + 1), high, key);
    }
    return BinarySearch(arr, low, (mid - 1), key);
}

int findpivot(int arr[], int low, int high)
{
    if (high < low)
    {
        return -1;
    }
    if (high == low)
    {
        return low;
    }
    int mid = (low + high) / 2;
    if (mid < high && arr[mid] > arr[mid + 1])
    {
        return mid;
    }
    if (mid > low && arr[mid] < arr[mid - 1])
    {
        return (mid - 1);
    }
    return findpivot(arr, mid + 1, high);
}
int pivotedBinarySearch(int arr[], int n, int key)
{
    int pivot = findpivot(arr, 0, n - 1);
    if (pivot == -1)
        return BinarySearch(arr, 0, n - 1, key);

    if (arr[pivot] == key)
    {
        return pivot;
    }
    if (arr[0] <= key)
    {
        return BinarySearch(arr, 0, pivot - 1, key);
    }
    return BinarySearch(arr, pivot + 1, n - 1, key);
}
int main()
{
    int n;
    cin >> n;
    int arr1[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }

    int key;
    cin >> key;

    cout <<  pivotedBinarySearch(arr1, n, key) << endl;
    return 0;
}
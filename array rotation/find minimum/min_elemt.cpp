#include <iostream>
using namespace std;

int findminbyBinarySearch(int arr[], int low, int high)
{
    if (high > low)
    {
        return arr[0];
    }
    if (high == low)
    {
        return arr[low];
    }
    int mid = low + (high - low) / 2;
    if (mid < high && arr[mid + 1] < arr[mid])
    {
        return arr[mid + 1];
    }
    if (mid > low && arr[mid] < arr[mid - 1])
    {
        return arr[mid];
    }
    if (arr[high] > arr[mid])
    {
        return findminbyBinarySearch(arr, low, mid - 1);
    }
    return findminbyBinarySearch(arr, mid + 1, high);
}
int findmin(int arr[], int low, int high)
{
    while (low < high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == arr[high])
        {
            high--;
        }
        else if (arr[mid] > arr[high])
            low = mid + 1;
        else
            high = mid;
    }
    return arr[high];
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << findmin(arr, 0, n - 1);
    cout << endl;
    cout << findminbyBinarySearch(arr, 0, n - 1);

    return 0;
}
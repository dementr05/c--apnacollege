#include <iostream>
using namespace std;
bool pairInSortedRotated(int arr[], int n, int x)
{
    int i;
    for (i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            break;
        }
    }
    int l = (i + 1) % n;
    int r = i;

    while (l != r)
    {
        if (arr[l] + arr[r] == x)
            return true;

        if (arr[l] + arr[r] < x)
            l = (l + 1) % n;

        else
        {
            r = (n + r - 1) % n;
        }
    }
    return false;
}
int pairsInSortedRotated(int arr[], int n, int x)
{
    int i;
    for (i = 0; i < n - 1; i++)
        if (arr[i] > arr[i + 1])
            break;

    int l = (i + 1) % n;

    int r = i;

    int cnt = 0;

    while (l != r)
    {

        if (arr[l] + arr[r] == x)
        {
            cnt++;

            if (l == (r - 1 + n) % n)
            {
                return cnt;
            }

            l = (l + 1) % n;
            r = (r - 1 + n) % n;
        }

        else if (arr[l] + arr[r] < x)
            l = (l + 1) % n;

        else
            r = (n + r - 1) % n;
    }

    return cnt;
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
    int sum;
    cin >> sum;
    if (pairInSortedRotated(arr, n, sum))
    {
        cout << "+1";
    }
    else
    {
        cout << "-1";
    }
    cout << endl;
    cout << pairsInSortedRotated(arr, n, sum);
    return 0;
}
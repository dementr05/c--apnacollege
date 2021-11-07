#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int n;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        int arr[n];
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
        }
        int diff = 0;
        int ans = 1;
        int length = -1;

        for (int j = 0; j < n; j++)
        {
            if (j == 0)
            {
                diff = arr[j + 1] - arr[j];
            }
            else
            {
                if (arr[j] - arr[j - 1] == diff)
                {
                    ans++;
                }
                else
                {
                    diff = arr[j] - arr[j - 1];
                    if (ans > length)
                    {
                        length = ans;
                    }

                    ans = 2;
                }
            }
        }
        if (length < ans)
        {
            length = ans;
        }
        cout<<length<<endl;
        // cout <<"Case #"<< i + 1 <<":"<< length << endl;
    }
}
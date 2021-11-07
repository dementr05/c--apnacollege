#include <iostream>
using namespace std;
int main()
{
    int n, i;
    cout << "Enter the number" << endl;
    cin >> n;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << "Non- prime" << endl;
            break;
        }
    }
    if (i == n)
    {
        cout << "prime" << endl;
    }

    return 0;
}
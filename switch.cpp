#include <iostream>
using namespace std;
int main()
{
    char button;
    cout << "Enter the character" << endl;
    cin >> button;

    switch (button)
    {
    case 'a':

        cout << "Hello"<<endl;
    case 'b':
        break;
        cout << "Namaste"<<endl;
        break;
    case 'c':
        cout << "salut"<<endl;
        break;
    case 'd':
        cout << "HOla"<<endl;
        break;
    case 'e':
        cout << "Ciao"<<endl;
        break;

    default:
        cout << "I am still learning..." << endl;
        break;
    }

    return 0;
}
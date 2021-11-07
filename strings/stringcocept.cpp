#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    cin>>str;
    cin.ignore();
    string str3;
    getline(cin, str3);cout<<str<<endl;
    string str1(10,'n');
    cout<<str1<<endl;
    string str2 = "akashyadav";
    cout<<str2<<endl;
    
    
    cout<<str3<<endl;
    return 0;
}
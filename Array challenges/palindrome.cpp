#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char a[n];
    cin>>a;
    int i=0;
    bool check = 1;
    while(a[i]!= a[n-1-i]){
        check =0;
        break;
    }
    if(check){
        cout<<"Word is a palindrome"<<endl;
    }
    else{
        cout<<"Word is not a palindrome"<<endl;
    }
    return 0;
}
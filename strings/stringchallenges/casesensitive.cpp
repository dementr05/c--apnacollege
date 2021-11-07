#include <iostream>
#include <string>
#include<algorithm>
using namespace std;
int main()
{
    string str = "akashyadav";
    // convert into upper casesensitive
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i]>='a' && str[i]<='z')
        {
            str[i]-=32;
        }
        
    }
    cout<<str<<endl;

    // convert into lower case
    for (int i = 0; i < str.size(); i++){
        if (str[i]>='A' && str[i]<='Z'){
            str[i] +=32;
        }
    }
    cout<<str<<endl;
    

    // another way to do it with inbuilt function

    string str1 ="rahulkumar";
    transform(str1.begin(),str1.end(),str1.begin(), ::toupper);
    cout<<str1<<endl;
    transform(str1.begin(),str1.end(),str1.begin(), ::tolower);
    cout<<str1<<endl;
    return 0;
}
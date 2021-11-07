#include<iostream>
using namespace std;
int main()
{
    int pm=3000;
    for (int i = 0; i <=30; i++)
    {
        if (i%2==0)
        {
            continue;
        }
        if (pm==0)
        {
            break;  
        }
        cout<<"Go out today";
        pm-=pm;
        
    }
    
    return 0;
}
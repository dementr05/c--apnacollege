#include <iostream>
using namespace std;
int main()
{
    int a=10; //stored in stack
    int *p = new int(); //allocate memory in heap
    *p=10; // giving value to to p using derefrencing
    cout<<*p<<endl; //
    delete(p); //delete from heap
    p = new int [4];
    p[0]=10;
    p[1]=11;
    p[2]=12;
    p[3]=13;
     
    //  printing the array 
    for (int i = 0; i < 4; i++)
    {
        cout<<p[i]<< " ";

    }
    
    delete [] p; //deleting thearray p  from heap to avoid memeory leak
    p=NULL; //giving NULL to delete this variable from stack


    return 0;
}
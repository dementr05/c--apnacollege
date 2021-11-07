#include <iostream>
using namespace std;
int sum(int *a, int *b) {
    int sum = 0;
    sum += *a+*b;
    return sum;

}
int main()
{
    int n,m;
    cin>>n>>m;
    cout<<sum(&n,&m);
    return 0;
}
#include <iostream>
using namespace std;
class Node{
public:
int data;
Node* next;
};
// void print(Node** head_ref){
//     cout<<&head_ref<<endl;
//     cout<<head_ref<<endl;
//     cout<<(*head_ref)<<endl;
//     // cout<<(**node)<<endl;
// }
int main()
{
    // Node *head = NULL;
    // cout<<head<<endl;
    // cout<<&head<<endl;
    // // cout<<(*&head)<<endl;
    // print(&head);
    int x=5;
    int *p=&x;
    int **y = &p;

    // cout<<y<<endl;
    // cout<<*y<<endl;
    // cout<<**y<<endl;
    cout<<p<<endl;
    cout<<&p<<endl;
    return 0;
}
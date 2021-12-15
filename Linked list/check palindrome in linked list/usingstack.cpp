#include <iostream>
#include<stack>
using namespace std;
class Node{
    public:
    int data;
    Node(int d){
        data = d;

    }
    Node *ptr;
};
bool ispalin(Node *head){
    Node *slow = head;
    stack<int> s;
    while(slow!= NULL){
        s.push(slow->data);
        slow = slow->ptr;
    }
    while (head!=NULL)
    {
        int i = s.top();
        s.pop();
        if(head->data != i){
            return false;
        }
        head = head->ptr;
    }
    return true;
}
int main()
{
    Node one = Node(1);
    Node two = Node(2);
    Node three = Node(3);
    Node four = Node(4);
    Node five = Node(1);


    // Now intiliazing the address to connect them;
    five.ptr =NULL;
    one.ptr = &two;
    two.ptr = &three;
    three.ptr = &four;
    four.ptr = &five;
    Node *temp = &one;

    int r= ispalin(&one);
    if (r==1)   
    {
        cout<< "Numbers are palindrome.";
    }
    else
    {
        cout<<"Numbers are not palindrome.";
    }
    
    
    return 0;
}
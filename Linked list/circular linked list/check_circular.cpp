#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
};
bool isCircular(Node *head){
    if (head == NULL)
    {
        return true;
    }
    Node *node = head->next;
    while (node != NULL && node != head)
    {
        node = node->next;
    }
    return (node == head);
    
}
Node *newnode(int data){
    Node *temp = new Node;
    temp->data = data;
    temp->next = NULL;
    return temp;
}
int main()
{
    Node *head = newnode(1);
    head->next = newnode(2);
    head->next->next = newnode(3);
    head->next->next->next = newnode(4);

    isCircular(head)? cout<< "yes\n": cout<< "NO\n";
    head->next->next->next->next = head;
    isCircular(head)? cout<< "yes\n": cout<< "NO\n";
                    
    return 0;
}
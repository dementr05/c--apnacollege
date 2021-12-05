#include <iostream>
using namespace std;
class Node {
    public:
    int data;
    Node *next;
};
void push(Node ** head_ref, int new_data){
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;

}

int getNth(Node* head, int n){
    if (head==NULL)
    {
        return -1;
    }
    if (n==0)
    {
        return head->data;
    }
    return getNth(head->next, n-1);
    
    
}
int main()
{
    Node * head = NULL;
    push(&head, 1);
    push(&head, 4);
    push(&head, 1);
    push(&head, 12);
    push(&head, 1);
    cout << "Element at index 3 is " << getNth(head, 1);
    return 0;
}
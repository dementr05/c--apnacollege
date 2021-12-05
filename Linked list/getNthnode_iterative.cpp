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

int getNth(Node* head, int index){
    Node* curr= head->next;
    int count=0;
    while (curr!= NULL)
    {
        if(count ==index){
            return (curr->data);
        }
        count++;
        curr = curr->next;
    }
    return -1;
}
int main()
{
    Node * head = NULL;
    push(&head, 1);
    push(&head, 4);
    push(&head, 1);
    push(&head, 12);
    push(&head, 1);
    cout << "Element at index 3 is " << getNth(head, 7);
    return 0;
}
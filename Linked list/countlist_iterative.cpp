#include <iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
};
void push(Node** head_ref,int new_data){
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref)= new_node;
}

int getcount(Node* head){
    int count = 0;
    Node *current = head;
    while (current!=NULL)
    {
        count++;
        current = current->next;
    }
    return count;
}

int main()
{
    Node * head =NULL;
    push(&head,1);
    push(&head,2);
    push(&head,3);
    push(&head,4);
    push(&head,5);
    cout<<"Count of the nodes: "<<getcount(head)<<endl;
    return 0;
}
#include <iostream>
using namespace std;
class Node {
    public:
    int data;
    Node *next;
};
void deletelist(Node ** head_ref){
    Node *current= *head_ref;
    Node *next= NULL;
    while (current!= NULL)
    {
        next= current->next;
        free(current);
        current=next;

    }
    *head_ref =NULL;
}
void push(Node ** head_ref, int new_data){
    Node *new_node = new Node();
    new_node->data= new_data;
    new_node->next= (*head_ref);
    (*head_ref)= new_node;
}
void printlist(Node *node){
    while (node!=NULL)
    {
        cout<<node->data<<" ";
        node= node->next;
    }
    
}
int main()
{
    Node* head= NULL;
    push(&head,1);
    push(&head,2);
    push(&head,3);
    push(&head,4);
    push(&head,5);
    printlist(head);
    cout<<"\nDeleting the linked list..."<<endl;
    deletelist(&head);
    cout<<"After deleting the list..."<<endl;
    printlist(head);


    return 0;
}
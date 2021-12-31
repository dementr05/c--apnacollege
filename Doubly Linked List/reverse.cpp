#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node *prev;
};

void reverse(Node **head_ref){
    Node *temp = NULL;
    Node *curr = *head_ref;
    while (curr != NULL)
    {
        temp = curr->prev;
        curr->prev = curr->next;
        curr->next = temp;
        curr = curr->prev;
    }

    if (temp != NULL)
    {
        *head_ref = temp->prev;
    }
}
void push(Node **head_ref, int new_data){
    Node *new_node= new Node();
    new_node->data = new_data;
    new_node->prev = NULL;
    new_node->next = (*head_ref);
    if ((*head_ref) != NULL)
    {
        (*head_ref)->prev = new_node;
    }
    (*head_ref) = new_node;
}
void printlist(Node *node){
    while (node != NULL)
    {
        cout<<node->data<<" ";
        node = node->next;
    }
    
}
int main()
{
    Node *head = NULL;
    push(&head,2);
    push(&head, 4);
    push(&head, 8);
    push(&head, 10);
    cout<<"ORiginal Linked List:->";
    printlist(head);

    reverse(&head);
    cout<<"\n reversed linked list:->";
    printlist(head);
    return 0;
}
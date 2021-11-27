#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};
void push(Node **head_ref, int new_Data)
{
    Node *new_node = new Node();
    new_node->data = new_Data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

void deletenode(Node **head_ref, int key)
{
    Node *temp = *head_ref;
    Node *prev = NULL;

    if (temp != NULL && temp->data == key)
    {
        *head_ref = temp->next;
        delete temp;
        return;
    }
    else
    {
        while (temp != NULL && temp->data != key)
        {
            prev = temp;
            temp = temp->next;
        }
        if (temp == NULL)
        {
            return;
        }
        prev->next = temp->next;
        delete temp;
    }
}

void printlist(Node* node){
    while (node!= NULL)
    {
        cout<< node->data<<" ";
        node= node->next;
    }
    
}
int main()
{
    Node* head= NULL;
    push(&head,7);
    push(&head,1);
    push(&head,3);
    push(&head,2);
    puts("Created linked list: ");
    printlist(head);
    deletenode(&head,1);
    deletenode(&head,7);
    puts("\n Linked list after deletion of 1");
    printlist(head);
    return 0;
}
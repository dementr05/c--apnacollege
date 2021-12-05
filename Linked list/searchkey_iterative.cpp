// #include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int key;
    Node *next;
};
void push(Node **head_ref, int new_data)
{
    Node *new_node = new Node();
    new_node->key = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}
bool search(Node *head, int x)
{

    Node *current = head;
    while (current != NULL)
    {
        if (current->key == x)
        {
            return true;
        }
        current = current->next;
    }
    return false;
}
bool search_iterative(Node* head, int x){
    if (head == NULL)
    {
        return false;
    }
    if (head->key == x)
    {
        return true;
    }
    return search(head->next,x);
    
}
int main()
{
    Node *head = NULL;
    int x = 21;
    push(&head, 10);
    push(&head, 30);
    push(&head, 11);
    push(&head, 21);
    push(&head, 14);
    if(search(head,11)){
        cout<<"Key found"<<endl;
    }
    else{
        cout<<"Key not found"<<endl;
    }
    if(search_iterative(head,212)){
        cout<<"Key found"<<endl;
    }
    else{
        cout<<"Key not found"<<endl;
    }
    return 0;
}
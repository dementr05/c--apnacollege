#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
};
int frequency =0;
void push(Node ** head_ref, int new_data){
    Node *new_node = new Node();
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}
int counter(Node * head, int key){
    int count=0;
    while (head!=NULL)
    {
        if(head->data == key){
            count++;
        }
        head= head->next;

    }
    return count;
}
int counter_recurssive(Node * head, int key){
    if (head == NULL)
    {
        return frequency;
    }
    if (head->data == key)
    {
        frequency++;
    }
    return counter_recurssive(head->next, key);
    
    
}
int main()
{
    Node* head = NULL;
    push(&head,1);
    push(&head,2);
    push(&head,1);
    push(&head,1);
    push(&head,2);
    push(&head,2);
    push(&head,2);
    cout<< "1 occurs  ["<< counter(head,1)<< "]   times"<<endl;
    cout<< "1 occurs  ["<< counter_recurssive(head,2)<< "]   times"<<endl;

    return 0;
}
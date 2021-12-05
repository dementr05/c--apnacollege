#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
};

int getMiddle(Node *head)
{
   Node *m = head;
   int count = 0;
   
   while(head!=NULL){
       ++count;
       if(count%2 == 0){
           m = m->next;
       }
       head = head->next;
   }
   return m->data;
}

void push(Node** head_ref, int new_data){
   
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref)= new_node;
    
}
int main()
{
    Node* head = NULL;
    push(&head,1);
    push(&head,2);
    push(&head,3);
    push(&head,4);
    push(&head,5);
    push(&head,6);
    push(&head,7);
    cout<<getMiddle(head);
    return 0;
}
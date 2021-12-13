#include <iostream>
using namespace std;
class Node{
    public:
    int key;
    Node* next;
};
Node* newNode(int key){
    Node* temp = new Node;
    temp->key = key;
    temp->next = NULL;
    return temp;
}
void printList(Node *head){
    while (head!= NULL)
    {
        cout<< head->key <<" ";
        head = head->next;
    }
    cout<<endl;
}
bool detectloop(Node* head){
    Node* temp = new Node;
    while (head!= NULL)
    {
        if(head->next == NULL){
            return false;
        }
        if (head->next == temp)
        {
            return true;
        }
        Node* nex = head->next;
        head->next = temp;
        
        head = nex;
    }
    return false;

}
int main()
{
    // Marking visited nodes without modifying the linked list data structure

    Node* head = newNode(1);
    head->next = newNode(2);
    head->next->next = newNode(3);
    head->next->next->next = newNode(4);
    head->next->next->next->next = newNode(5);
    printList(head);
    /* Create a loop for testing(5 is pointing to 3) */
    head->next->next->next->next->next = head->next->next;
    
    bool found = detectloop(head);
    if (found)
        cout << "Loop Found";
    else
        cout << "No Loop";
    
    return 0;
}
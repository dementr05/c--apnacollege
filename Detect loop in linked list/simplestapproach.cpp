#include <iostream>
using namespace std;
class Node{
    public:
    int key;
    Node *next;
};
Node* newNode(int key){
    Node* temp = new Node;
    temp->key = key;
    temp->next = NULL;
    return temp;
}

bool detectLoop(Node * head){
    if(!head) return false;
    else
    {
        while (head)
        {
            if(head->key == -1){
                return true;
            }
            else
            {
                head->key = -1;
                head = head->next;
            }
            
        }
        
    }
    return false;
}
int main()
{
    Node* head = newNode(1);
    head->next = newNode(2);
    head->next->next = newNode(3);
    head->next->next->next = newNode(4);
    head->next->next->next->next = newNode(5);
 
    /* Create a loop for testing(5 is pointing to 3) */
    // head->next->next->next->next->next = head->next->next;
 
    bool found = detectLoop(head);
    cout << found << endl;
    return 0;
}
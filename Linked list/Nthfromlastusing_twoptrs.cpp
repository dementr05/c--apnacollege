#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};

void printNthfromlast(Node *head, int n)
{
    Node *main_ptr = head;
    Node *ref_ptr = head;
    int count = 0;
    if (head != NULL)
    {
        while (count < n)
        {
            if (ref_ptr == NULL)
            {
                cout << n << " is the greater than the no. of nodes in the list." << endl;
                return;
            }
            ref_ptr = ref_ptr->next;
            count++;
        }
        if (ref_ptr == NULL)
        {
            head = head->next;
            if (head != NULL)
            {
                printf("Node no. %d from last is %d", n, main_ptr->data);
            }
        }
        else
        {
            while (ref_ptr != NULL)
            {
                main_ptr = main_ptr->next;
                ref_ptr = ref_ptr->next;
            }
            printf("Node no. %d from last is %d", n, main_ptr->data);
        }
    }
}
void push(Node **head_ref, int new_data)
{
    Node *new_node = new Node();
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}
int main()
{
    Node *head = NULL;
    push(&head, 20);
    push(&head, 4);
    push(&head, 15);
    push(&head, 35);
    printNthfromlast(head, 3);
    cout << endl;
    printNthfromlast(head, 4);

    return 0;
}
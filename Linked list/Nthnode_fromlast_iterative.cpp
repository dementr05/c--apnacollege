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
    int len = 0, i;
    Node *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        len++;
    }
    if (len < n)
    {
        return;
    }
    temp = head;
    for (i = 1; i < len - n + 1; i++)
    {
        temp = temp->next;
    }
    cout << temp->data << " ";
    return;
}

void push(Node **head_ref, int new_data)
{
    Node *new_node = new Node();
    new_node->data = new_data;
    new_node->next = *head_ref;
    *head_ref = new_node;
}
int main()
{
    Node *head = NULL;
    push(&head, 20);
    push(&head, 4);
    push(&head, 15);
    push(&head, 35);
    printNthfromlast(head, 4);
    printNthfromlast(head, 3);
    printNthfromlast(head, 1);

    return 0;
}
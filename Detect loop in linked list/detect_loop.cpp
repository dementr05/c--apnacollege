#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    int flag;
};
void push(Node **head_ref, int new_data)
{
    Node *new_node = new Node();
    new_node->data = new_data;
    new_node->flag = 0;
    new_node->next = *head_ref;
    *head_ref = new_node;
}
bool detectloop(Node *h)
{
    while (h != NULL)
    {
        if (h->flag == 1)
        {
            return true;
        }
        h->flag = 1;
        h = h->next;
    }
    return false;
}


// Floyd’s Cycle-Finding Algorithm




class Node2
{
public:
    int data2;
    Node2 *next2;
};
void push2(Node2 **head_ref, int new_data)
{
    Node2 *new_node = new Node2();
    new_node->data2 = new_data;
   
    new_node->next2 = *head_ref;
    *head_ref = new_node;
}
int countNodes(struct Node2 *n)
{
    int res = 1;
    struct Node2 *temp = n;
    while (temp->next2 != n)
    {
        res++;
        temp = temp->next2;
    }
    return res;
}
int countNodesinLoop(struct Node2 *list)
{
    struct Node2 *slow_p = list, *fast_p = list;
 
    while (slow_p && fast_p &&
                     fast_p->next2)
    {
        slow_p = slow_p->next2;
        fast_p = fast_p->next2->next2;
 
        /* If slow_p and fast_p meet at
        some point then there is a loop */
        if (slow_p == fast_p)
            return countNodes(slow_p);
    }
 
    /* Return 0 to indicate that
       there is no loop*/
    return 0;
}
int detectLoop2(Node2 *list)
{
    Node2 *slow_p = list, *fast_p = list;
    while (slow_p && fast_p && fast_p->next2)
    {
        slow_p = slow_p->next2;
        fast_p = fast_p->next2->next2;
        if (slow_p == fast_p)
        {
            return 1;
        }
    }
    return 0;
}


int main()
{
    Node *head = NULL;
    push(&head, 20);
    push(&head, 4);
    push(&head, 15);
    push(&head, 10);
    head->next->next->next->next = head;
    if (detectloop(head))
        cout << "Loop found";
    else
        cout << "No Loop";

cout<<endl;
    Node2 *head2 = NULL;

    push2(&head2, 20);
    push2(&head2, 4);
    push2(&head2, 15);
    push2(&head2, 10);

    /* Create a loop for testing */
    head2->next2->next2->next2->next2 = head2->next2;
    cout<<"floyd algorithm result:->"<<endl;
    if (detectLoop2(head2))
        cout << "Loop found";
    else
        cout << "No Loop";


cout <<" Length of the loop:-> " <<countNodesinLoop(head2) << endl;
    return 0;
}

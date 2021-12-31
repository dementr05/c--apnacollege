#include <iostream>
using namespace std;
class CircularQueue
{
private:
    int front;
    int rear;
    int arr[5];
    int itemsCount;
public:
    CircularQueue(){
        front = -1;
        rear = -1;
        itemsCount=0;
        for (int i = 0; i < 5; i++)
        {
            arr[i]=0;
        }
        
    }
    bool isEmpty()
    {
        if (front == -1 && rear == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    bool isFull()
    {
        if ((rear+1)%5 == front)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void enqueue(int val)
    {
        if (isFull())
        {
            cout << "Queue is full" << endl;
            return;
        }
        else if (isEmpty())
        {
            rear = front = 0;
            arr[rear] = val;
            itemsCount++;
        }
        else
        {
            rear = (rear+1)%5;
            arr[rear] = val;
            itemsCount++;
        }
    }
    int dequeue()
    {
        int x = 0;
        if (isEmpty())
        {
            cout << "Queue is Empty" << endl;
            return 0;
        }
        else if (rear == front)
        {
            x = arr[front];
            arr[front] = 0;
            rear = -1;
            front = -1;
            itemsCount--;
            return x;
        }
        else
        {
            x = arr[front];
            arr[front] = 0;
            front= (front+1)%5;
            itemsCount--;
            return x;
        }

    }
    int count()
    {
        return itemsCount;
    }
    void display()
    {
        cout << "All values in the queue are - ";
        for (int i = 0; i < 5; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    
};

int main()
{
    CircularQueue q1;
    int option, value;

    do
    {
        cout << "\n\n What operation do you want to perfoerm? select option. Enter 0 to exit." << endl;
        cout << "1. Enqueue()" << endl;
        cout << "2. Dequque()" << endl;
        cout << "3. isEmpty()" << endl;
        cout << "4. isFull()" << endl;
        cout << "5. count()" << endl;
        cout << "6. display()" << endl;
        cout << "7. clear screen" << endl
             << endl;

        cin >> option;

        switch (option)
        {
        case 0:
            break;
        case 1:
            cout << "Enqueue operation \n Enter an item to Enqueue in the queue" << endl;
            cin >> value;
            q1.enqueue(value);
            break;
        case 2:
            cout << "Dequeue Operation \n Dequeued value:" << q1.dequeue() << endl;
            break;
        case 3:
            if (q1.isEmpty())
            {
                cout << "Queue is Empty" << endl;
            }
            else
            {
                cout << "Queue is not empty." << endl;
            }
            break;
        case 4:
            if (q1.isFull())
            {
                cout << "Queue is full" << endl;
            }
            else
            {
                cout << "queue is not full" << endl;
            }
            break;
        case 5:
            cout << "count operation \n Count of items in Queue: " << q1.count() << endl;
            break;
        case 6:
            cout << "Display opertation: " << endl;
            q1.display();
            break;
        case 7:
            system("cls");
            break;
        default:
            cout << "Entered invalid option." << endl;
            break;
        }
    } while (option != 0);
    return 0;
}
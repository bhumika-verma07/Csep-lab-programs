#include <iostream>
using namespace std;

#define MAX 5

int queue[MAX];
int front = -1;
int rear = -1;

// Enqueue operation
void enqueue(int value)
{
    // Queue is full
    if ((rear + 1) % MAX == front)
    {
        cout << "Queue Overflow!" << endl;
    }
    else
    {
        
        if (front == -1)
        {
            front = 0;
            rear = 0;
        }
        else
        {
            rear = (rear + 1) % MAX;
        }

        queue[rear] = value;
        cout << value << " inserted into circular queue." << endl;
    }
}

// Dequeue operation
void dequeue()
{
    // Queue is empty
    if (front == -1)
    {
        cout << "Queue Underflow!" << endl;
    }
    else
    {
        cout << queue[front] << " deleted from circular queue." << endl;

        // Only one element was present
        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else
        {
            front = (front + 1) % MAX;
        }
    }
}

// Peek operation
void peek()
{
    if (front == -1)
    {
        cout << "Queue is empty!" << endl;
    }
    else
    {
        cout << "Front element: " << queue[front] << endl;
    }
}

// Display operation
void display()
{
    if (front == -1)
    {
        cout << "Queue is empty!" << endl;
    }
    else
    {
        cout << "Circular Queue elements: ";

        int i = front;

        while (true)
        {
            cout << queue[i] << " ";

            if (i == rear)
                break;

            i = (i + 1) % MAX;
        }

        cout << endl;
    }
}

int main()
{
    int choice, value;

    while (true)
    {
        cout << "\n----- CIRCULAR QUEUE MENU -----" << endl;
        cout << "1. Enqueue" << endl;
        cout << "2. Dequeue" << endl;
        cout << "3. Peek" << endl;
        cout << "4. Display" << endl;
        cout << "5. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                enqueue(value);
                break;

            case 2:
                dequeue();
                break;

            case 3:
                peek();
                break;

            case 4:
                display();
                break;

            case 5:
                cout << "Program ended." << endl;
                return 0;

            default:
                cout << "Invalid choice!" << endl;
        }
    }

    return 0;
}
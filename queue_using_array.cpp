#include <iostream>
using namespace std;

#define MAX 5

int queue[MAX];
int front = -1;
int rear = -1;

// Enqueue operation
void enqueue(int value)
{
    if (rear == MAX - 1)
    {
        cout << "Queue Overflow!" << endl;
    }
    else
    {
        if (front == -1)
            front = 0;

        rear++;
        queue[rear] = value;

        cout << value << " inserted into queue." << endl;
    }
}

// Dequeue operation
void dequeue()
{
    if (front == -1 || front > rear)
    {
        cout << "Queue Underflow!" << endl;
    }
    else
    {
        cout << queue[front] << " deleted from queue." << endl;
        front++;

        if (front > rear)
        {
            front = -1;
            rear = -1;
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
        cout << "Queue elements: ";

        for (int i = front; i <= rear; i++)
        {
            cout << queue[i] << " ";
        }

        cout << endl;
    }
}

int main()
{
    int choice, value;

    while (true)
    {
        cout << "\n----- QUEUE MENU -----" << endl;
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

#include <iostream>
using namespace std;

#define MAX 5

class Stack {
private:
    int arr[MAX];
    int top;

public:
    // Constructor
    Stack() {
        top = -1;
    }

    void push(int value) {
        if (top == MAX - 1) {
            cout << "Stack Overflow!" << endl;
            return;
        }

        arr[++top] = value;
        cout << value << " pushed into stack." << endl;
    }

    void pop() {
        if (top == -1) {
            cout << "Stack Underflow!" << endl;
            return;
        }

        cout << arr[top--] << " popped from stack." << endl;
    }

    int peek() {
        if (top == -1) {
            cout << "Stack is empty!" << endl;
            return -1;
        }

        return arr[top];
    }

    bool isEmpty() {
        return top == -1;
    }

    void display() {
        if (top == -1) {
            cout << "Stack is empty!" << endl;
            return;
        }

        cout << "Stack elements: ";
        for (int i = top; i >= 0; i--) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    s.display();

    cout << "Top element: " << s.peek() << endl;

    s.pop();
    s.display();

    return 0;
}
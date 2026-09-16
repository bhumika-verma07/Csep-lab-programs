#include <iostream>
using namespace std;

#define MAX 100

class Stack {
    int arr[MAX];
    int top;

public:
    Stack() {
        top = -1;
    }

    void push(int value) {
        if (top == MAX - 1) {
            cout << "Stack Overflow";
            return;
        }
        arr[++top] = value;
    }

    int pop() {
        if (top == -1) {
            cout << "Stack Underflow";
            return -1;
        }
        return arr[top--];
    }
};

int main() {
    int n;
    int a[MAX];

    cout << "Enter size of array: ";
    cin >> n;

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    Stack s;

    for (int i = 0; i < n; i++) {
        s.push(a[i]);
    }

    for (int i = 0; i < n; i++) {
        a[i] = s.pop();
    }

    cout << "Reversed array: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}
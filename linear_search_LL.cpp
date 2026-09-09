#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;
};

void search(node* head, int key) {

    node* temp = head;
    int position = 1;

    while(temp != NULL) {

        if(temp->data == key) {
            cout << "Element found at position "
                 << position;
            return;
        }

        temp = temp->next;
        position++;
    }

    cout << "Element not found";
}

int main() {

    node* head = new node{10, NULL};
    head->next = new node{20, NULL};
    head->next->next = new node{30, NULL};

    int key;

    cout << "Enter element to search: ";
    cin >> key;

    search(head, key);

    return 0;
}
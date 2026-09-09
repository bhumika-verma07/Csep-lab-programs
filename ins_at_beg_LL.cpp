#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;
};

void insertHead(node*& head, int data) {

    node* newnode = new node;

    newnode->data = data;
    newnode->next = head;

    head = newnode;
}

void display(node* head) {

    node* temp = head;

    while(temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL";
}

int main() {

    node* head = new node{20, NULL};
    head->next = new node{30, NULL};

    int data;

    cout << "Enter data: ";
    cin >> data;

    insertHead(head, data);

    display(head);

    return 0;
}
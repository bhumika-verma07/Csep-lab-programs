#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;
};

void insertPosition(node*& head, int data, int pos) {

    node* newnode = new node;

    newnode->data = data;

    if(pos == 1) {
        newnode->next = head;
        head = newnode;
        return;
    }

    node* temp = head;

    for(int i = 1; i < pos - 1; i++) {
        temp = temp->next;
    }

    newnode->next = temp->next;
    temp->next = newnode;
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

    node* head = new node{10, NULL};
    head->next = new node{20, NULL};
    head->next->next = new node{40, NULL};

    int data, pos;

    cout << "Enter data: ";
    cin >> data;

    cout << "Enter position: ";
    cin >> pos;

    insertPosition(head, data, pos);

    display(head);

    return 0;
}
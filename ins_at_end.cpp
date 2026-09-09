#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;
};

void insertTail(node*& head, int data) {

    node* newnode = new node;

    newnode->data = data;
    newnode->next = NULL;

    if(head == NULL) {
        head = newnode;
        return;
    }

    node* temp = head;

    while(temp->next != NULL) {
        temp = temp->next;
    }

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

    int data;

    cout << "Enter data: ";
    cin >> data;

    insertTail(head, data);

    display(head);

    return 0;
}
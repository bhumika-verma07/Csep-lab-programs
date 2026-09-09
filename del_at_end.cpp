#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;
};

void deleteTail(node*& head) {

    if(head == NULL)
        return;

    if(head->next == NULL) {
        delete head;
        head = NULL;
        return;
    }

    node* temp = head;

    while(temp->next->next != NULL) {
        temp = temp->next;
    }

    delete temp->next;

    temp->next = NULL;
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
    head->next->next = new node{30, NULL};

    deleteTail(head);

    display(head);

    return 0;
}
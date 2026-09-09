#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;
};

void deletePosition(node*& head, int pos) {

    if(head == NULL)
        return;

    if(pos == 1) {

        node* temp = head;
        head = head->next;

        delete temp;
        return;
    }

    node* temp = head;

    for(int i = 1; i < pos - 1; i++) {
        temp = temp->next;
    }

    node* del = temp->next;

    temp->next = del->next;

    delete del;
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
    head->next->next->next = new node{40, NULL};

    int pos;

    cout << "Enter position to delete: ";
    cin >> pos;

    deletePosition(head, pos);

    display(head);

    return 0;
}
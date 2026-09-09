#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;
};

int length(node* head) {

    int len = 0;
    node* temp = head;

    while(temp != NULL) {
        len++;
        temp = temp->next;
    }

    return len;
}

int main() {

    node* head = new node{10, NULL};
    head->next = new node{20, NULL};
    head->next->next = new node{30, NULL};

    cout << "Length = " << length(head);

    return 0;
}
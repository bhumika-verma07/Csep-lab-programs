#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;
};

void findMiddle(node* head) {

    node* slow = head;
    node* fast = head;

    while(fast != NULL && fast->next != NULL) {

        slow = slow->next;
        fast = fast->next->next;
    }

    cout << "Middle element = " << slow->data;
}

int main() {

    node* head = new node{10, NULL};
    head->next = new node{20, NULL};
    head->next->next = new node{30, NULL};
    head->next->next->next = new node{40, NULL};
    head->next->next->next->next = new node{50, NULL};

    findMiddle(head);

    return 0;
}
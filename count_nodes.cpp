#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;
};

int countNodes(node* head) {

    int count = 0;
    node* temp = head;

    while(temp != NULL) {
        count++;
        temp = temp->next;
    }

    return count;
}

int main() {

    node* head = new node{10, NULL};
    head->next = new node{20, NULL};
    head->next->next = new node{30, NULL};

    cout << "Number of nodes = "
         << countNodes(head);

    return 0;
}
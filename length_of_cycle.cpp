//length of cycle in linked list
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// length of cycle
int cycleLength(Node* head) {
    Node* slow = head;
    Node* fast = head;

    // Detect cycle
    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) {
        
            int count = 1;
            Node* temp = slow->next;

            while (temp != slow) {
                count++;
                temp = temp->next;
            }

            return count;
        }
    }

    return 0;
}

int main() {
    Node* head = new Node{1, nullptr};
    Node* second = new Node{2, nullptr};
    Node* third = new Node{3, nullptr};
    Node* fourth = new Node{4, nullptr};
    Node* fifth = new Node{5, nullptr};

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    //creating a cycle
    fifth->next = third;

    int length = cycleLength(head);

    if (length == 0)
        cout << "No cycle";
    else
        cout << "Length of cycle = " << length;

    return 0;
}
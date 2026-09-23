//slow and fast pointer approach

#include<iostream>
using namespace std;

struct node{
    int data;
    node* next;
};

node* head = NULL;

bool hasCycle(node* head){
    node* slow = head;
    node* fast = head;

    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast){
            return true;
        }
    }

    return false;
}


int main(){
    
    return 0;
}
#include<iostream>
using namespace std;

struct node{
    int data;
    node* next;
};

node* createnode(int data){
    node* newnode = new node;
    newnode-> data=data;
    newnode-> next=NULL;

    return newnode;

}

void display(node* head){
    node* temp = head;
    while(temp != NULL){
        cout<< temp->data << " -> ";
        temp = temp->next;
    }
    cout<< "NULL";
}

int main(){
    node* head = createnode(10);
    head->next = createnode(20);
    head->next->next = createnode(30);

    display(head);

    return 0;
}
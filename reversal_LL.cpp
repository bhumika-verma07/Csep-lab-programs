#include<iostream>
using namespace std;

struct node{
    int data;
    node*next;
};

void insertend(node* &head, int value){
    node* newnode= new node();
    newnode->data=value;
    newnode->next=NULL;

    if(head==NULL){
        head=newnode;
        return;
    }

    node* temp = head;
    while(temp -> next != NULL){
        temp = temp -> next;
    }
    temp -> next = newnode;
}

void display(node* head){
    node* temp = head;
    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}


void reverse(node* &head){
    node* prev = NULL;
    node* curr = head;
    node* next = NULL;

while (curr != NULL){
    next = curr -> next;
curr -> next = prev;
prev = curr;
curr = next;
}

head = prev;
}

int main(){
    
    node* head = NULL;
    int n, value;

    cout<<"Enter the number of elements: ";
    cin>> n;

    cout<<"Enter the elements: ";
    for(int i=0; i<n; i++){
        cin>> value;
        insertend(head, value);
    }

    cout<<"Original list: ";
    display(head);

    reverse(head);

    cout<<"Reversed list: ";
    display(head);

}
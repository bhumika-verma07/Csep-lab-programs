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

node* createlist(int n){
    node* head = NULL;
    node* temp = NULL;

    for(int i = 1; i<=n; i++){
        int data;
        cout<< "Enter data for node " <<i<<": ";
        cin>> data;
        node* newnode = createnode(data);
        if(head == NULL){
            head = newnode;
            temp = newnode;
        }
        else{
            temp->next = newnode;
            temp = newnode;
        }
    }
    return head;
}
int main(){
    node* head = NULL;
    int n;

    cout<<"Enter number of nodes: ";
    cin>> n;
    head = createlist(n);
    return 0;
}
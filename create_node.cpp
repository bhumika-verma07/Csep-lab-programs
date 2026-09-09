#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

node *createnode(int data)
{
    node *newnode = new node;
    newnode->data = data;
    newnode->next = NULL;
    return newnode;
}

int main()
{
    node *head = createnode(10);
    int n;
    cout << "Data = " << head->data << endl;
    cout << "Next = " << head->next << endl;
   
    return 0;
}

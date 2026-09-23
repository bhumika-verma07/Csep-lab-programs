#include <iostream>
using namespace std;

#define MAX 100

class Queue {
private:
    int arr[MAX];
    int front;
    int rear;

    public :
    Queue(){
        front = -1;
        rear = -1;
    }
};


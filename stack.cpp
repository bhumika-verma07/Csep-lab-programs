#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack <int> st;
    st.push(10);
    st.push(20);
    st.push(30);

    cout << "Size of the stack is : " << st.size() << endl;

    cout << "Top Element : " << st.top() << endl;

    st.pop();
    cout << "Top Element after popping : " << st.top() << endl;

    if(st.empty()){
        cout << "Stack is empty !" << st.empty() << endl;
    }
    
    st.push(40);
    
    if(!st.empty()){
        
        cout<<"Stack is not empty. Top element: "<< st.top() << endl;
    }

    return 0;
}
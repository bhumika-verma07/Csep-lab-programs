#include<iostream>
using namespace std;

int main(){
    // What is pointer? ----> data type which holds the address of other data types

    int a=3;
    int* b = &a;
    // & ---> (address of) operator
    cout<<"The address of a is "<<&a<<endl;
    cout<<"The address of a is "<<b<<endl;
// here b is a pointer storing address of a
    
// * ---> (value at) dereference operator
cout<<"The value at address b is "<<*b<<endl;

// pointer to pointer
int** c = &b;
cout<<"the address of b is "<<&b<<endl;
cout<<"the address of b is "<<c<<endl;
cout<<"the value at address c is "<<*c<<endl;
cout<<"the value at address value_at(value_at(c)) is "<<**c<<endl;

    return 0;
}
// there are two types of header files:
// 1. system header files: it comes with the compiler 
#include<iostream>
// 2. user defined header files: it is written by the programmers itself
// #include "this.h" --> this wil produce an error if not present in the current directory
using namespace std;

int main(){
    int a=4, b=5;
    cout<<"operators in c++:"<<endl;
    cout<<"following are the types of operators in c++:"<<endl;
// arithmetic operators
cout<<"the value of a + b is "<<a+b <<endl;
cout<<"the value of a - b is "<<a-b <<endl;
cout<<"the value of a * b is "<<a*b <<endl;
cout<<"the value of a / b is "<<a/b <<endl;
cout<<"the value of a % b is "<<a%b <<endl;
cout<<"the value of a ++ is "<<a++ <<endl;
cout<<"the value of a -- is "<<a-- <<endl;
cout<<"the value of ++ a is "<<++a <<endl;
cout<<"the value of -- a is "<<--a <<endl;
cout<<endl;

// assignment operators --> used to assign values to variables
// int a=3, b=9;
// char d= 'd';

// comparison operators
cout<<"the value of a == b is "<<(a==b)<<endl;
cout<<"the value of a != b is "<<(a!=b)<<endl;
cout<<"the value of a >= b is "<<(a>=b)<<endl;
cout<<"the value of a <= b is "<<(a<=b)<<endl;
cout<<"the value of a > b is "<<(a>b)<<endl;
cout<<"the value of a < b is "<<(a<b)<<endl;
cout<<endl;

// logical operators
cout<<"the value of ((a==b) && (a<b)) logical and operator is "<<((a==b) && (a<b))<<endl;
cout<<"the value of ((a==b) || (a<b)) logical or operator is "<<((a==b) || (a<b))<<endl;
cout<<"the value of (!(a==b)) logical and operator is "<<(!(a==b))<<endl;

return 0;
}  
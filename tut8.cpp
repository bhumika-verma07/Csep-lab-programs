#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    // int a = 34;
    // cout<<"the value of a was : "<<a;
    // a = 45;
    // cout<<"the vlaue of a is : "<<a;
    
    
    // Constants in c++

    // const int a = 34;
    // cout<<"the value of a was : "<<a<<endl;
    // a = 45; //you will get an error as a is constant
    // cout<<"the vlaue of a is : "<<a<<endl;


    // manipulators in c++

    // int a=3 , b=78, c=1234;
    // cout<<"the value of a without setw is : "<<a<<endl;
    // cout<<"the value of b without setw is : "<<b<<endl;
    // cout<<"the value of c without setw is : "<<c<<endl;
    
    // cout<<"the value of a is : "<<setw(4)<<a<<endl;
    // cout<<"the value of b is : "<<setw(4)<<b<<endl;
    // cout<<"the value of c is : "<<setw(4)<<c<<endl;


    //operator precedence
    int a=3 , b=4;
    // int c= (a*5)+b;
    int c = ((((a*5)+b)-45)+87);
    cout<<c;

    return 0;
}
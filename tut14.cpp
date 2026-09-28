#include<iostream>
using namespace std;

typedef struct employee
{
    /* data */
    int eId; //4
    char favChar; //1
    float salary; //4
} ep;

union money
{
    /* data */
    int rice; //4
    char car; //1
    float pounds; //4
};


int main(){
    enum meal{breakfast, lunch, dinner};
    meal m1 = breakfast;
    cout<<m1;
    
    // cout<<breakfast<<endl;
    // cout<<lunch<<endl;
    // cout<<dinner<<endl;

    // union money m1;
    // m1.rice = 34;
    // m1.car = 'c';
    // cout<<m1.car;    
    
    // ep harry;
    // struct employee shubham;
    // harry.eId = 1;
    // harry.favChar = 'c';
    // harry.salary = 1200000000;
    // cout<<"The value is "<<harry.salary<<endl;    
    // cout<<"The value is "<<harry.favChar<<endl;    
    // cout<<"The value is "<<harry.eId<<endl;    

    return 0;
}
#include<iostream>
using namespace std;

int add(int n,int sum,int t){

    if(n==0)
    return sum;

    t=n%10;
    sum=sum+t;
    n=n/10;

    return add(n,sum,t);
     
}

int main(){
int n;
int t;
int sum;

cout << "Enter the digits you want to add : ";
cin >> n;
sum = add(n,0,t);
cout << "Addition of the digits : " << sum;
return 0;
}
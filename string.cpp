#include<iostream>
using namespace std;

int main(){
    char str[100];
cout << "Enter your string: ";
cin.getline(str,100);

cout << "String = " << str << endl;
int size = 0;
while(str[size]!='\0'){
    size++;
}
cout << "Size : " << size<< endl;

    return 0;
}
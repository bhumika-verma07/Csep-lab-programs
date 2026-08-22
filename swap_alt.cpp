#include<iostream>
using namespace std;

int main(){
    int arr[5]={2,5,6,8,7},i=0,temp;
     for (int i = 0; i < 5; i++)
     {
        temp = arr[i];
        arr[i]= arr[i+1];
        arr[i+1]=temp;
        i = i+1;
     }

     cout << "Swapped elements are (alternatively) :";

     for (i = 0; i<5 ; i++){
        cout << arr[i] << endl;

     }
     
    return 0;
}
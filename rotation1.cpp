#include<iostream>
using namespace std;

int main(){
    int arr[5] = {1,2,3,4,5};
    int temp[5];
    int k;
    cout << "Enter the no. of rotations : ";
    cin >> k;

    k = k%5;

    while(k--){ //while(k>0){
        //k--;}
        int last = arr[4]; //saves last element

        for(int i=4;i>0;i--){
            arr[i]=arr[i-1]; //shifts all elements to right
        }
        arr[0]=last;
    }
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}
#include<iostream>
using namespace std;

int main(){
    int arr[4]={2,3,4,5},i,cube[4];
    for (int i = 0; i < 4; i++)
    {
        cube[i] = arr[i]*arr[i]*arr[i];
        
    }
    cout<< "Cube of array is : " ;
    
    for(i = 0; i<4; i++){
        cout << cube[i] <<endl;
    }

    return 0;
}
#include<iostream>
using namespace std;

int main(){
    int arr[10]={1,2,3,2,2,2,1,4,2,6},count=0;

    for(int i=0 ; i < 10; i++){
        if(arr[i]==2){
            count++;
        }
    }
        cout << count;
    return 0;
}
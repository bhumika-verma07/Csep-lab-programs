#include<iostream>
using namespace std;

int main(){
    int arr[9]={0,1,2,0,3,0,1,2};
    int j=0; //pstn where I should put next non zero element 
    for (int i = 0; i < 9; i++)
    {
        if(arr[i]!=0){
            arr[j]=arr[i];
            j++;
        }
    }
    while(j<9){ //to put 0s at the end
        arr[j]=0;
        j++;
    }
    for (int i = 0; i < 9; i++)
    {
        cout << arr[i] << " ";
    }
    
    
    return 0;
}
#include<iostream>
using namespace std;

int main(){
    int arr[8]={7,2,3,4,5,6,8,9},i,avg,sum=0;
    for (int i = 0; i < 8; i++)
    {
        sum = sum + arr[i];
    }
     avg = sum/8;


    cout << "Elements greater than avg are:";
    for ( i = 0; i < 8; i++)
    { if(arr[i]>avg){
        cout << arr[i] << endl;
    }
    }
     
    return 0;
}
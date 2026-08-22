#include<iostream>
using namespace std;

int main(){
    // int arr[10]={1,2,3,4,5};
    // int n=5; //index
    // int x=6; //value
    // arr[n]=x;
    // n++;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }

   
   
    // int arr[10]={2,3,4,5};
    // int n=4;
    // int x=1;

    // for (int i = n; i > 0; i--)
    // {
    //     arr[i]=arr[i-1];
    // }
    // arr[0]=x;
    // n++;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }



    int arr[10]={1,2,3,5,6};
    int n=5;
    int x=4;
    int pos=4;

    for(int i=n; i>=pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos-1]=x;
    n++;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}


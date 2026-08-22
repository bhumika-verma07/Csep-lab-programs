#include<iostream>
using namespace std;

int main(){
    int arr[5]={1,2,3,4,5};
    int temp[5];
    int k;

    cout<<"Enter rotations : ";
    cin>>k;

    k=k%5; //A 5 element array repeats after every 5 rotations.
    // rotating 12 times is exactly same as rotating 2 times.
    for (int i = 0; i < 5; i++)
    {
        temp[(i+k)%5]=arr[i]; //take each element from arr and place it at its new position in temp.
    }

    cout<< "Rotated Array: ";

    for (int i = 0; i < 5; i++)
    {
        cout<<temp[i]<<" ";
    }
    
    return 0;
}
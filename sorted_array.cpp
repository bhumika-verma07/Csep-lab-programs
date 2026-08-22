#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter Size :";
    cin>>n;
    int arr[n];
    cout<<"Enter elements : ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int count=0; //will store how many times the order decreases in the array

    for (int i = 0; i < n; i++)
    {
        if(arr[i]>arr[(i+1)%n]) //gives next element
        count++;
    }

    if(count<=1)
    cout << "Rotated Sorted Array";
    else
    cout <<"Not Rotated Sorted" ;
    

    return 0;
}
#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the no. of elements : ";
    cin>> n;

    int arr[n];
    cout << "Enter the elements of the array (sorted) : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int target;
    cout << "Enter the element you want to find : ";
    cin >> target;

    int low=0;
    int high = n-1;

    while(low<=high){
       int mid = (low + high)/2;
        if(arr[mid]==target){
            cout << "Element is found at position " << mid;
            break;
        }

        if(arr[mid]>target){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }

}
    
    return 0;
}
#include<iostream>
using namespace std;

int main(){
    int arr[10]={1,1,2,2,3,3,3,5,5,5};

    int target;
    cout<< "Enter the element you want to find ( 1st occurance ): ";
    cin >> target;

    int low=0;
    int high=9;
    int mid;
    int final=-1;

    while(low<=high){
        int mid = (low + high)/2;
        if(arr[mid]==target){
            final = mid;
            high = mid - 1;
        }
        else if(arr[mid]>target){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }

        if(final != -1){
            cout << "First occurance is at index " << final;
        }else{
            cout << "Element not found" ;
        }
        
    return 0;
}
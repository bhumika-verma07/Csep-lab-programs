#include<iostream>
using namespace std;

int main(){
    int arr[10]={9,2,3,2,5,5,2,3,2,6};
    cout << "Duplicate elements are : ";
    for (int i = 0; i < 10; i++)
    {
        int count = 0;
        for (int j = 0 ; j<10 ; j++){ 
            if (arr[i]==arr[j]){
                count++;
            } 
        }  
    
   if(count>1){
    int flag = 0;
    for (int k = 0; k < i; k++)
    {
        if(arr[i]==arr[k]){
            flag=1;
            break;
        }
    }
    if(flag==0){
        for (int k = 0; k < count; k++)
        {
            cout << arr[i] << " ";
        }
        
    }
    
   }
}
    return 0;
}
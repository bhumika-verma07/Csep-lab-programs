#include<iostream>
using namespace std;

int main(){
    int arr[5]={1,2,3,4,5},sum=0,mul=1;
    for(int i=0; i<5; i++ ){
    if (i%2==0){
        sum = sum + arr[i];
  }
  else{
     mul = mul*arr[i];
  }
}
  cout << "Sum = " << sum <<endl;
  cout << "Multiplication = " << mul;

    return 0;
}
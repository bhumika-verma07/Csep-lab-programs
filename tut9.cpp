#include<iostream>
using namespace std;

int main(){
    // cout<<"this is tutorial 9 ";
    int age;
    cout<<"Tell me your age"<<endl;
    cin>>age;
  
  
  //1. SELECTION CONTROL STR : IF ELSE-IF ELSE LADDER

    // if(age<18){
    //     cout<<"You can't come to my party"<<endl;
    // }

//     if((age<18) && (age>0)){
//     cout<<"You can't come to my party"<<endl;
// }

// else if(age==18){
//     cout<<"You are a kid and you will get a kid pass to the party"<<endl;
// }

// else if(age<1){
//     cout<<"You are not yet born"<<endl;
// }

// else{
// cout<<"You can come to my party"<<endl;

// }


//2. SELECTION CONTROL STR : SWITCH CASE STR
switch (age)
{
case 18:
   
    cout<<"You are 18"<<endl;
    break;
    case 22:
    
    cout<<"You are 22"<<endl;
    break;
    case 2:
    
    cout<<"You are 2"<<endl;
    break;

default:
cout<<"No special cases"<<endl;
    break;
}
cout<<"Done with switch case";
    return 0;
}
#include<iostream>
using namespace std;
int main(){
    cout<<"Enter three numbers: "<<endl;
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    // if(n1 > n2 && n1>n3){
    //     cout<<"The largest number is "<<n1; 
    // }
    // if(n2 > n1 && n2 > n3){
    //     cout<<"The largest number is "<<n2;
    // }
    // else{
    //     cout<<"The largest number is "<<n3;
    // }
    
    if(n1>n2){
        if(n1>n3){
            cout<<"n1 is greatest";
        }
        else{//n3>n1>n2
            cout<<"n3 is greatest";
        }
    }
    else{//n2>n1
    if(n2>n3){
        cout<<"n2 is greatest";
    }
    else{//n3>n2>n1
        cout<<"n3 is greatest";
    }
    }

}
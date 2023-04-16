#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a number:"<<endl;
    int n;
    cin>>n;
    // if((n % 5 == 0 ||  n % 3 == 0)&&(n % 15 !=0)){
    //     cout<<true;
    // }
    // else{
    //     cout<<false;
    // }


    if(n % 5 == 0 ||  n % 3 == 0){
        if(n % 15!=0){
            cout<<"yes";
        }
        else{
        cout<<"no";
    }
    }
     else{
        cout<<"no";
    }
    
    


}
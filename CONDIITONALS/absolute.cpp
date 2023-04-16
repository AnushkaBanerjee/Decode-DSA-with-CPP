//modulus of a number
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter an integer:";
    cin>>n;
    // if(n>0){
    //     cout<<n;
    // }
    // else{//if n <= 0
    //     cout<<-n;
    // }
    if(n < 0){
        n = -n;
    }
    cout<<n;
}
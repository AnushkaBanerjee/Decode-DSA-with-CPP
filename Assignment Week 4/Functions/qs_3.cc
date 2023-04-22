//Q3: Given two numbers a and b, write a function to print all odd numbers between them.

#include<iostream>
using namespace std;
void odd(int n1,int n2){
    for(int i = n1;i <=n2;i++){
        if(i % 2!= 0) cout<<i<<endl;
        
    }
    
}


int main(){
    int a,b;
    cout<<"Enter two numbers:";
    cin>>a>>b;
    odd(a,b);

return 0;
}
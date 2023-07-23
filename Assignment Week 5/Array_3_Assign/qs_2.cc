// Find the factorial of a large number
//Hint : Use an array to store every digit of answer

#include<iostream>
#include<vector>
using namespace std;


int go(vector<int>&v,int val,int size){
    int carry = 0 ;
    for(int i = 0;i < size;i++){
        
        int prod = v[i]*val + carry;
        v[i] = prod%10;
        carry = prod/10;
    }

    while(carry){
        v[size]=carry%10; 
        carry/=10;
        size++;
    }

    
    return size;
}



int main(){
int n;
cin>>n;//5


vector<int>a(500,0);
int size = 1;
a[0] = 1;//array -> 1 

for(int i = 2;i <= n;i++){
    size=go(a,i,size);
}

cout<<endl;

for(int i = size-1;i >=0;i--){
cout<<a[i];
}
return 0;
}
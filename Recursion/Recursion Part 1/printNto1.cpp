#include<iostream>
using namespace std;

void print(int n){
    // while(n>0){
    //     cout<<n<<endl;
    //     n--;
    // }


    //Using Recursion
    //base case
    if(n == 0) return;
    cout<<n<<endl;//work
    print(n-1);//call
}


int main(){
print(6);
return 0;
}
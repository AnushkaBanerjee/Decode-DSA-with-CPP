#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter the value of n for fibonacci numbers:";
cin>>n;

int a = 1,b = 1;
cout<<a<<" "<<b<<" ";
for(int i = 3;i <= n;i++){
    int next = a + b;
    cout<<next<<" ";
    a = b;
    b = next;
}

return 0;
}
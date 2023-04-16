#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter no of rows:";
cin>>n;
for(int i = 0;i < n;i++){
    for(int j = 0;j < n-i-1;j++){
        cout<<" ";
    }
    for(int k = 1;k <= i+1 ;k++){
        cout<<(char)('A'+ k - 1);
    }
    cout<<endl;
}
return 0;
}
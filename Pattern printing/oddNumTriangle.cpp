#include<iostream>
using namespace std;
int main(){
int n;
cout<<"No of rows:";
cin>>n;

for(int i = 1; i <= n;i++){
    int a = 1;
    for(int j = 1;j <= i;j++){//for(int j = 1;j <= 2*n-1;j+=2)
        //first 'i' odd numbers
        cout<<a;
        a+=2;
    }
    cout<<endl;
}
return 0;
}
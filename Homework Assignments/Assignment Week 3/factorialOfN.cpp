#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter the nth number upto which factorial is to be found: "<<endl;
cin>>n;
int i;
int fact = 1;
for(i = 1;i <= n;i++){
fact*=i;
cout<<fact<<endl;
}
return 0;
}
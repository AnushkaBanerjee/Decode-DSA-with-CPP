#include<iostream>
using namespace std;
int main(){
    //(a > 0 && b > 0)
int a,b;
cout<<"Enter base: ";
cin>>a;
cout<<"Enter exponent: ";
bool flag = true;//true means power positive
cin>>b;
if(b<0){
    flag = false;//b is negative power
    b = -b;
}
float power = 1;
for(int i = 1;i<=b;i++){
    power*=a;
}
if(flag==false){
    power=1/power;
    b = -b;
}
if(a == 0 && b == 0)cout<<"Not defined";
else cout<<a<<" raised to the power "<<b<<" is "<<power;
return 0;
}
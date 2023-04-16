#include<iostream>
using namespace std;

int gcd(int num1,int num2){
    int hcf = 1;
    //24 60
    //i = 24,23,22,21...1

    for(int i  = min(num1,num2);i >=  1;i--){
        if(num1%i==0 && num2%i==0){//i is a common factor
            hcf = i;
            break;

        }
    }
    return hcf;
}

int main(){
//gcd <= min(x,y)
int a;
cout<<"Enter first number:";
cin>>a;

int b;
cout<<"Enter first number:";
cin>>b;

cout<<gcd(a,b);
return 0;
}
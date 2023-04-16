#include<iostream>
using namespace std;
int main(){
    //dd  = dsr*q + r
    //r = dd - dsr*q
     int a  = 14;//dividend
     int b = 3;//divisor
    // int q = a/b;
    // int r = a - (b*q);//r = remainder
    // cout<<r;
    //or we can also use the modulo operator %
    int r  = a%b;
    cout<<r<<endl;

}
#include<iostream>
using namespace std;
int main(){
    int num1;
    int p = 5,q = 10;
    //q = q-p-->10-5
    //p = p+q-->5+5
    //Assignment
    p += q -= p;//right to left precedence
    cout<<p<<" "<<q;//10 5
    return 0;

}
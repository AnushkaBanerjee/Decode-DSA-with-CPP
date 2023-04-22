#include<iostream>
using namespace std;
int main(){
    // bool p = 0-->false
    // bool q = 0-->false
    // bool r = 1-->true
    //(p==q)==(r) -> (1)==1
    int p = 1;
    int q = 2;
    int r = 2;
      
    cout<<(p == q == r);//left to right precednece
    //(p==q)==(r) -> (0)==2 -> 0
    //(p)==(q==r) -> (1)==(2==2) -> (1)==(1) -> 1
}
#include<iostream>
using namespace std;
int main(){
    int x;
    x = 5 > 8 ? 10 : 1!= 2 < 5 ? 20 : 30;//right to left precedence
    cout<< "Value of x is :"<<x;
    return 0;
}
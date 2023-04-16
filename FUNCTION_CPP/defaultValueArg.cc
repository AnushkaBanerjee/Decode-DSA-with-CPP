#include<iostream>
using namespace std;

void fun(int x = 7,int y = 8){//default values
    cout<<x<<" "<<y;
}

int main(){
fun(4);//actual argument is prioritised
return 0;
}
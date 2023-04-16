#include<iostream>
using namespace std;
int a = 9;//global variable
void fun(int x, int y){
cout<<"address of func x:"<<&x<<endl;
cout<<"address of func y:"<<&y<<endl;
}
void f(){
    cout<<a;
}
int main(){
    int a  = 9;
int x ;//local variable
int y ;
cout<<"address of main x:"<<&x<<endl;
cout<<"address of main y:"<<&y<<endl;
fun(x,y);
return 0;
}
#include<iostream>
using namespace std;
int main(){
int x = 4;
int * p = &x; 
//int* p
int y = 5;
int* p1 = &y;


cout<<&x<<endl;
cout<<p<<endl;

cout<<&y<<endl;
cout<<p1<<endl;
return 0;
}
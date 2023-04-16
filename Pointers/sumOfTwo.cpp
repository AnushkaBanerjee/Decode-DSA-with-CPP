#include<iostream>
using namespace std;
int main(){
// int x = 6;
// int y = 9;
// int* p1 = &x;
// int* p2 = &y;
// cout<<*p1 + *p2;
int x,y;
int *p1 = &x,*p2 = &y;
cout<<"Enter value of x:\n"<<"Enter value of y:\n";
cin>>*p1>>*p2;
cout<<x<<' '<<y;
return 0;
}
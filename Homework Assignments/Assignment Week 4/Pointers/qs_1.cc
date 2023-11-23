//Q1 : Write a program to find the product of two numbers using pointers.
#include<iostream>
using namespace std;
int main(){
 int n1,n2;
 int *p1 = &n1,*p2 = &n2;
 cout<<"Enter two numbers:";
 cin>>n1>>n2;
 cout<<(*p1)*(*p2)<<endl;

return 0;
}
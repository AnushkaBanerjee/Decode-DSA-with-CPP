//calculator to perform simple operations like(+,-,/,*)
#include<iostream>
using namespace std;
int main(){
 int a,b;
 char op;
 cout<<"Enter the problem (in the form a op b):";
 cin>>a>>op>>b;
 switch(op){
    case '+':
        cout<<a+b;
        break;
    case '-':
        cout<<a-b;
        break;
    case '/':
        cout<<a/b;
        break;
    case '*':
        cout<<a*b;
        break;
    default:
        cout<<"Invalid";
 }
return 0;
}
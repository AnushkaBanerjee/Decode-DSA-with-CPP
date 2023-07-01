#include<iostream>
using namespace std;
int main(){
//In-built function
//to_string() -> converts interger to  string

//FIXME:
int x = 12345;
//string s = (string)x;//This will give us an error
//Typecasting is not allowed in string
//TODO:
string s = to_string(x);
cout<<s;
return 0;
}

//V.V.Imp
//A string(continuous inside another string in same order)
#include<iostream>
#include<string>
using namespace std;
int main(){
string s = "anushka";
//In-built function -> substr
// cout<<s.substr(0)<<endl;
// cout<<s.substr(1)<<endl;
// cout<<s.substr(2)<<endl;
// cout<<s.substr(3)<<endl;
// cout<<s.substr(4)<<endl;
// cout<<s.substr(5)<<endl;
// cout<<s.substr(6)<<endl;
//s.substr(idx,len)
cout<<s.substr(1,3);
return 0;
}
//OUTPUT:
// anushka
// nushka
// ushka
// shka
// hka
// ka
// a
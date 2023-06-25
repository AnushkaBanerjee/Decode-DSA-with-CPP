#include<iostream>
using namespace std;
int main(){
// string is basically a class
// string str = "Anushka is a B.tech student";
// cout<<str<<endl;
// cout<<str[0];

//Input
string s;
//FIXME:
cin>>s;//only if the entered string doesnot contain spaces in between words
//OUTPUT:
// Anushka Banerjee
// Anushka

//TODO:
// getline(cin,s);//VVIMP
//OUTPUT:
//Anushka Banerjee
//Anushka Banerjee
cout<<s;
return 0;
}
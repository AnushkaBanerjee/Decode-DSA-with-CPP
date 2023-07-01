//reverse frist part of the string of even length
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
string str;
cout<<"Enter the string of  even length:"<<endl;
getline(cin,str);
int len = str.length();
//reverse first half
reverse(str.begin(),str.begin()+(len/2));
cout<<str<<endl;
return 0;
}
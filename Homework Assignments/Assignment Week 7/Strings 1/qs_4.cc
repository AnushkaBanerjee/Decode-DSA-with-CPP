// Input a string of even length and reverse the second half of the string.
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
string str;
cout<<"Enter the string of  even length:"<<endl;
getline(cin,str);
int len = str.length();
//reverse first half
reverse(str.begin()+(len/2),str.end());
cout<<str<<endl;
return 0;
}
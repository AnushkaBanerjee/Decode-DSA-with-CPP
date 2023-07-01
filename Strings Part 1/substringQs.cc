//Input a string of even length and return the second half of that string using inbuilt substr function
#include<iostream>
//#include<algorithm>
using namespace std;
int main(){
string str;
getline(cin,str);
int len = str.size();

cout<<str.substr(len/2);
//or str.substr(len/2,len-1);
return 0;
}
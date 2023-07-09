// Input a string of length less than 10 and convert it into integer without using builtin function.

#include<iostream>
using namespace std;
int main(){
string s;
getline(cin,s);//3244
int val = 0,pos = 1;

while(s.size()){//s.size()=4
val+=pos*(s.back()-'0');//val = 0->4->44->24->3244
s.pop_back();
pos*=10;
}
cout<<val;
return 0;
}
//Note:
//s.back() This function returns a direct reference to the last character of the string.
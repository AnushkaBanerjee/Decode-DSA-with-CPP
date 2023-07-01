/*Return the total number of digits in a number without using any loops*/
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
int x;
cout<<"Enter a number:";
cin>>x;
string s = to_string(x);
int len  = s.length();
cout<<len;
return 0;
}
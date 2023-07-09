//Given two strings check whether they are anagrams
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
string s = "physicswallah";
string t = "wallahphysics";
sort(s.begin(),s.end());
sort(t.begin(),t.end());
cout<<s<<endl<<t<<endl;
if(s==t)cout<<true;
else cout<<false;
return 0;
} 
#include<iostream>
using namespace std;
int main(){
    string s = "abcd";
    string t = "abdcf";
    cout<<s.compare(t);
return 0;

// 0 if s==t
// +ve if s>t
// -ve if s<t
}
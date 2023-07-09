//sorting in string happens in the lexicographical order 
//they are sorted in according of their ASCII values(in ascending order)
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
string s;
getline(cin,s);
sort(s.begin(),s.end());
cout<<s;
return 0;
}
// Ouput 1:
// name
// aemn
// Ouput 2:
// NAme
// ANem
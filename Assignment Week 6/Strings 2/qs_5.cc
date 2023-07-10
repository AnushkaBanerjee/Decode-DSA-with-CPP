// Given a sentence ‘str’, return the word that is lexicographically maximum.
// Input : str = "proud to be pwians"
// Output : pwians
// Input : str = "decode dsa with pw"
// Output : with
#include<iostream>
#include<sstream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
string str;
getline(cin,str);
stringstream ss(str);
vector<string>v;
string temp;
while(ss>>temp){
    v.push_back(temp);
}
sort(v.begin(),v.end());
int n = v.size();
cout<<v[n-1];
return 0;
}

// INPUT:decode dsa with pw
// OUTPUT:with
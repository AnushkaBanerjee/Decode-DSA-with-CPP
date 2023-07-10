//Write a function to find the longest common prefix string amongst an array of strings.

// If there is no common prefix, return an empty string "".
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
//strs = ["flower","flow","flight"]
vector<string>str;
// str.push_back("flower");
// str.push_back("flow");
// str.push_back("flight");
int size;
cin>>size;
string temp;
for(int i = 0;i < size;i++ ){
    cin>>temp;
    str.push_back(temp);
}
//lexicographically sorted 
for(int i = 0;i < str.size();i++){
    cout<<str[i]<<endl;
}
sort(str.begin(),str.end());
cout<<"\n";
//printing after sorting
for(int i = 0;i < str.size();i++){
    cout<<str[i]<<endl;
}
int n = str.size();
string first = str[0];
string last = str[n-1];
string s = "";
for(int i = 0;i < (min(first.size(),last.size()));i++){
    if(first[i]==last[i]){
             s+=first[i];
            }
            else s = "";
        }
    cout<<"The common prefix is:"<<endl;
    cout<<s;
return 0;
}
//OUTPUT:
// flower
// flow
// flight

// flight
// flow
// flower
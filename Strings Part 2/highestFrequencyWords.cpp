//Given a string print the word that is repeated maximum no of times
#include<iostream>
#include<sstream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
string str;
getline(cin,str);
string temp;
stringstream ss(str);
vector<string>v;
while(ss>>temp){
    v.push_back(temp);
}
cout<<endl;
sort(v.begin(),v.end());
for(int i = 0;i < v.size();i++){
    cout<<v[i]<<endl;
}

int maxCount = 1;
int count = 1;
for(int i = 1;i < v.size();i++){
    if(v[i]==v[i-1]) count++;
    else count = 1;
    
    maxCount = max(count,maxCount);
}
cout<<endl;
count = 1;
for(int i = 1;i < v.size();i++){
    if(v[i]==v[i-1]) count++;
    else count = 1;
    if(count == maxCount){
        cout<<v[i]<<" "<<count<<endl;
    }
}
return 0;
}

// Ouput:
// Hello everyone my name is Hello

// Hello
// Hello
// everyone
// is
// my
// name

// Hello 2
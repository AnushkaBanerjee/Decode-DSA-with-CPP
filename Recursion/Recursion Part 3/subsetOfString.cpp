#include<iostream>
#include<string>
#include<vector>
using namespace std;

void storeSubset(string ans,string original,int idx,vector<string> &v){
    if(idx == original.length()){
        v.push_back(ans);
        return;
    }
    char ch = original[idx];
    storeSubset(ans,original,idx+1,v);
    storeSubset(ans+ch,original,idx+1,v);
}

int main(){
string str = "abc";
vector<string> v;
storeSubset("",str,0,v);
for(string elt : v)
{
    cout<<elt<<endl;
}
return 0;
}
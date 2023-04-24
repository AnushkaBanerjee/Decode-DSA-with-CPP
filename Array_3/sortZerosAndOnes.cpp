//Sort the 0's and 1's
//Method : 1
#include<iostream>
#include<vector>
using namespace std;

void sort01(vector<int>& a){
    int noz=0,noo=0;
    for(int i = 0;i < a.size();i++){
        if(a[i]==0)noz++;
        else noo++;
    }
    for(int i = 0;i < a.size();i++){
        if(i < noz)a[i]=0;
        else a[i]=1;
    }
    
    
}


int main(){
vector<int>v;
v.push_back(0);
v.push_back(1);
v.push_back(1);
v.push_back(0);
v.push_back(1);
v.push_back(0);
v.push_back(1);
v.push_back(0);
for(int i = 0;i < v.size();i++){
    cout<<v[i]<<" ";
}
cout<<endl;
//sort
sort01(v);

for(int i = 0;i < v.size();i++){
    cout<<v[i]<<" ";
}
cout<<endl;
return 0;
}
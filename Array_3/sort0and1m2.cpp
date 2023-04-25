//Sort the 0's and 1's

#include<iostream>
#include<vector>
using namespace std;




//Method 2:Using two pointers
void sort01(vector<int>&a){
    int i=0,j=a.size()-1;
    while(i<j){
        if(a[i]==1&&a[j]==0){//or this can be written at last but there has to be a break condition in between
            a[i]=0;
            a[j]=1;
        }
        if(a[i]==0)i++;
        if(a[j]==1)j--;
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
//Q3=>Check if given array is sorted.

#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
int main(){
vector<int> v;
int n;
cout<<"Enter no of elements of the array:";
cin>>n;

//taking inputs
cout<<"Enter elements of the array:"<<endl;
for(int i = 0 ;i < n;i++){
    int p;
    cin>>p;
    v.push_back(p);
}

//display 
for(int i = 0; i<v.size();i++){
    cout<<v[i]<<" ";
}
cout<<endl;

bool flag = 1;
//checking if array is sorted
for(int i=0;i < v.size()-1;i++){
    if(v[i]>v[i+1]) flag = 0;
}
if(flag == 0) cout<<"NOT sorted";
else cout<<"sorted";


return 0;
}

//Q1=>Count the number of elements strictly greater than x.

#include<iostream>
#include<vector>
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

//specify element to be compared 
int x;
cout<<"specify element to be compared:";
cin>>x;


//comparing x with elements of array
int count = 0;
for(int i = 0;i < v.size();i++){
    if(v[i]>x) count++;
}

cout<<count<<endl;

return 0;
}
//Find the unique number in a given Array where all the elements are being repeated twice with one
//value being unique.
#include<iostream>
#include<vector>

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

int i,j;
int idx = i;
for(i = 0;i < v.size()-1;i++){
    int count = 0;
    for(j = 1;j < v.size();j++){
        if(v[i]==v[j]){
        count ++;
        break;
        }
        else idx = i;
    }
    
    
}
cout<<v[idx];
 

}
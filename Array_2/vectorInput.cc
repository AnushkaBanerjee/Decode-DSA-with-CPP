#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;//vector<int>v(9)
    int n;
    cout<<"Enter no of elements:";
    cin>>n;
    for(int i = 0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    //output -> 
    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    

return 0;
}
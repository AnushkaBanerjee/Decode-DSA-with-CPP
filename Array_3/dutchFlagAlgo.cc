#include<iostream>
#include<vector>
using namespace std; 
//Dutch Flag method(Since the Dutch flag has 3 colors )
void DutchFlagAlgo(vector<int>&arr){
    int lo=0,mid=0,hi=arr.size()-1;
    while(mid<=hi){
        if(arr[mid]==2){
            arr[mid]=arr[hi];
            arr[hi]=2;
            hi--;
        }
        if(arr[mid]==0){
            arr[mid]=arr[lo];
            arr[lo]=0;
            lo++;
            mid++;
        }
        if(arr[mid]==1)mid++;

    }
    
}








int main(){
vector<int>v;


//input
int n;
cout<<"Enter size of array:";
cin>>n;
for(int i = 0;i < n;i++){
    int x;
    cin>>x;
    v.push_back(x);
}

//calling the function
DutchFlagAlgo(v);
//output
cout<<endl;
for(int i = 0;i < v.size();i++){
    cout<<v[i]<<" ";
}
return 0;
}
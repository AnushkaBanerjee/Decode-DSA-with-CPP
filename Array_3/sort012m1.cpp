#include<iostream>
#include<vector>
using namespace std;

//sort function->

void sort012(vector<int>&arr){
    int noz=0,noo=0,notw=0;
    for(int i=0;i < arr.size();i++){
        if(arr[i]==0) noz++;
        else if(arr[i]==1) noo++;
        else notw++;
        
    }

    
    for(int i = 0;i < arr.size();i++){
        if(i < noz) arr[i]=0;
        else if(i < (noz+noo)) arr[i]=1;
        else arr[i]=2;
    }

}
int main(){
vector<int>v;
int n,x;
//input
cout<<"Enter size of array:";
cin>>n;
for(int i=0;i < n;i++){
    cin>>x;
    v.push_back(x);
}


//output
cout<<endl;
sort012(v);
for(int i =0;i < v.size();i++){
    cout<<v[i]<<" ";
}
return 0;
}
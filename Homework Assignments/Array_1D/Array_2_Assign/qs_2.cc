//Q2=>WAP to find the largest three elements in the array.

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



sort(v.begin(),v.end());

 int max1,max2,max3;
// max3 = max2 = max1=INT_MIN;
max1=v[v.size()-1];
max2=v[v.size()-2];
max3=v[v.size()-3];
cout<<max1<<" "<<max2<<" "<<max3;
return 0;
}

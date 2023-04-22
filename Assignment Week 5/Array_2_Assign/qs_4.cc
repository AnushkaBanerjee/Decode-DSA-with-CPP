//Q4=>Find the difference between the sum of elements at even indices to the sum of elements at odd
//indices.

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

//sum of even and odd indices
int sumEven=0,sumOdd=0;
for(int i = 0;i < v.size();i++){
    if(i%2==0) sumEven+=v[i];
    else sumOdd+=v[i];
}

cout<<sumEven-sumOdd;


}
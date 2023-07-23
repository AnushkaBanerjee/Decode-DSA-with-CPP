// Count the number of triplets whose sum is equal to the given value x.
#include<iostream>
#include<vector>
using namespace std;
int tripletCount(vector<int>&v,int x,int n){
int count = 0;
for(int i= 0;i < n;i++){
    for(int j = i+1;j < n;j++){
        for(int k = j+1;k<n;k++){
            if(v[i]+v[j]+v[k]==x) count++;
        }
    }
}
return count;
}


int main(){
//creating a dynamic array(also can be done with static array)
vector<int>v;
int size;
cout<<"Enter of elements in the array:";
cin>>size;
int temp;
for(int i = 0 ;i < size;i++){
    cin>>temp;
    v.push_back(temp);
}
int i,j,k;

int x;
cout<<"Enter value of x:";
cin>>x;
int output = tripletCount(v,x,size);
cout<<output;
return 0;
}
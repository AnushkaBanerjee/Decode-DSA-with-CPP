// Write a program to add two matrices and save the result in one of the given matrices
#include<iostream>
using namespace std;
int main(){
int m,n;
cout<<"Enter no of rows and columns for 1st array:";
cin>>m>>n;
int arr1[m][n];
for(int i = 0;i < m;i++){
    for(int j = 0;j < n;j++){
        cin>>arr1[i][j];
    }
}

int p,q;
cout<<"Enter no of rows and columns for 2nd array:";
cin>>p>>q;
int arr2[p][q];

if(p == m && q == n){
    
    for(int i = 0;i < m;i++){
    for(int j = 0;j < n;j++){
        cin>>arr2[i][j];
    }
}
}

else cout<<"Not Valid";

for(int i = 0;i < m;i++){
    for(int j= 0;j < n;j++){
        arr2[i][j]+=arr1[i][j];
    }
}
cout<<endl;
for(int i = 0;i < m;i++){
    for(int j = 0;j < n;j++){
        cout<<arr2[i][j]<<" ";
    }
    cout<<endl;
}


return 0;

}
// Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.
// You must do it in place.
// Input :
// 1 1 1
// 1 0 1
// 1 1 1
// Output :
// 1 0 1
// 0 0 0
// 1 0 1
#include<iostream>
#include<vector>
using namespace std;
int main(){

int m,n;
cin>>m>>n;
vector< vector<int> > arr(m,vector<int>(n));
for(int i = 0;i < m;i++){
    for(int j = 0; j < n;j++){
        cin>>arr[i][j];
    }
}

// check
int x=0,y=0;
for(int i = 0;i < m;i++){
    for(int j = 0; j < n;j++){
        if(arr[i][j]==0){
            x=i;
            y=j;
            
        }
    }
}

//change value
for(int i = 0;i < m;i++){
    for(int j = 0; j < n;j++){
        arr[x][j] = arr[i][y]=0;
    }
}
//print
for(int i = 0;i < m;i++){
    for(int j = 0; j < n;j++){
        cout<<arr[i][j];
    }
    cout<<endl;
}
return 0;
}
// Qs_5. Write a program to print the row number having the maximum sum in a given matrix
#include<iostream>
using namespace std;
int main(){
int m,n;
cin>>m>>n;
int arr[m][n];
for(int i = 0;i < m;i++){
    for(int j = 0;j < n;j++){
        cin>>arr[i][j];
    }
}

int sum = 0;
int prev = 0;
int rowMax = 0;
for(int i = 0;i < m;i++){
    prev = sum;
    sum = 0;
    for(int j = 0;j< n;j++){
        sum+=arr[i][j];
    }
    
    if(i > 0 && sum > prev){
        rowMax = i+1;
    }
}

cout<<"The row no "<<rowMax<<" has the maximum sum" ;
return 0;
}

// Write a C++ program to find the largest element of a given 2D array of integers
#include<iostream>
using namespace std;
int main(){
int m,n;
cin>>m>>n;
int arr[m][n];
for(int i = 0;i < m;i++)
{
    for(int j=0;j < n;j++){
        cin>>arr[i][j];
    }
}

int max = arr[0][0];
for(int i = 0;i < m;i++)
{
    for(int j=0;j < n;j++){
        if(arr[i][j]> max)
        {
            max = arr[i][j];
        }
    }
}

cout<<max;
return 0;
}
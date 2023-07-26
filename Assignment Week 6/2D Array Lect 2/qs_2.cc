// Qs_2.Write a program to rotate the matrix by 90 degrees anti-clockwise
#include<iostream>
#include<vector>
using namespace std;

int main(){

int n;
cin>>n;
int v[n][n];
for(int i= 0;i < n;i++){
    for(int j = 0;j < n;j++){
        cin>>v[i][j];
    }
}

//transpose
for(int i = 0;i < n;i++){
    for(int j = i+1;j < n;j++){
        int temp = v[i][j];
        v[i][j] = v[j][i];
        v[j][i] = temp;
    }
}


//reverse anti-clockwise
for(int k = 0;k < n;k++){
    int i = 0,j = n-1;
    while(i <= j){
        int temp = v[i][k];
        v[i][k] = v[j][k];
        v[j][k] = temp;
        i++;
        j--;
    }
}

//display
for(int i = 0;i < n;i++){
    for(int j = 0;j < n;j++){
        cout<<v[i][j]<<" ";
    }
    cout<<endl;
}
return 0;
}   
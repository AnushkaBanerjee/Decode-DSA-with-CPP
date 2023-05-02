//Write a program to print transpose of a matrix input given by the user
#include<iostream>
using namespace std;
int main(){
    //input
    int m,n;
    cout<<"Enter the no of rows:";
    cin>>m;
    cout<<"Enter the no of columns:";
    cin>>n;
    int arr[m][n];
    cout<<"Enter the elements of the array:";
    for(int i = 0;i < m;i++){
        for(int j = 0;j < n;j++){
            cin>>arr[i][j];
        }
    }
    //printing the array
    cout<<"printing the array!"<<endl;
    for(int i = 0;i < m;i++){
        for(int j = 0;j < n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
//store the transpose
int t[n][m];
for(int i = 0;i < n;i++){
    for(int j = 0;j < m;j++){
        t[i][j]=arr[j][i];
    }
}
//printing tranpose matrix;
cout<<"printing the transpose!"<<endl;
    for(int i = 0;i < n;i++){
        for(int j = 0;j < m;j++){
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }
return 0;
}
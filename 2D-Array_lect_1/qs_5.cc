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
    //printing the transpose
    cout<<"printing the transpose!"<<endl;
    for(int j = 0;j < n;j++){
        for(int i = 0;i < m;i++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

return 0;
}
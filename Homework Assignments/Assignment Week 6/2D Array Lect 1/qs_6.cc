// Qs_6.Write a function which accepts a 2D array of integers and its size as arguments and displays the 
// elements of middle row and the elements of middle column.
// [Assuming the 2D Array to be a square matrix with odd dimensions i.e. 3x3, 5x5, 7x7 etc...]
#include<iostream>
using namespace std;





int main(){

int m,n;
cout<<"Enter dimensions of the array(should be odd and a square matrix)"<<endl;
cin>>m>>n;    
 int arr[m][n];
 for(int i = 0;i < m;i++){
    for(int j = 0;j < n;j++){
        cin>>arr[i][j];
    }
 }


cout<<"The middle elements are as follows:"<<endl;
for(int i = 0;i < m;i++){
    for(int j = 0;j < n;j++){
        if(i == m/2 or j == n/2){
            cout<<arr[i][j];
        }
        
    }
    cout<<endl;
 }
return 0;
}
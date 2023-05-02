//you are given a matrix / 2-D array of size(nxn).
//Change this matrix into its transpose
#include<iostream>
using namespace std;
int main(){
//input
    int m,n;
    cout<<"Enter the no of rows/columns:";
    cin>>m;
    
    
    int arr[m][m];
    cout<<"Enter the elements of the array:";
    for(int i = 0;i < m;i++){
        for(int j = 0;j < m;j++){
            cin>>arr[i][j];
        }
    }
    //printing the array
    cout<<"printing the array!"<<endl;
    for(int i = 0;i < m;i++){
        for(int j = 0;j < m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    //transpose in the same matrix
    //FIXME:
    // for(int i = 0;i < m;i++){
    //     for(int j = 0;j < m;j++){
    //         int temp = arr[i][j];
    //         arr[i][j]=arr[j][i];
    //         arr[j][i]=temp;
    //     }
        
    // }
    //In the above code the matrix is being swapped during repetitions twice
    //TODO:
//1-> we donot travel the lower triangular matrix
for(int i = 0;i < m;i++){
        for(int j = i+1;j < m;j++){
            int temp = arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
        
    }






    //print after transpose
    cout<<"printing the array after transpose!"<<endl;
    for(int i = 0;i < m;i++){
        for(int j = 0;j < m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
return 0;
} 
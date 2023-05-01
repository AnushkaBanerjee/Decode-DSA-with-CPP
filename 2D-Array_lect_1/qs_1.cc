//Write a program to store roll number and marks obtained by 4 students side by side in a matrix
#include<iostream>
using namespace std;
int main(){
 //roll no,marks
 //4 students
 int arr[2][4];
//input
 for(int i = 0;i < 2;i++){
     for(int j = 0;j < 4;j++){
         cin>>arr[i][j];
     }
     
 }

//output
 for(int i = 0;i < 2;i++){
     for(int j = 0;j < 4;j++){
         cout<<arr[i][j]<<" ";
     }
     cout<<endl;
 }
return 0;
}
// TODO:
// ->arr[4][2];
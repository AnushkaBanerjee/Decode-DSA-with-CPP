#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void change(int a[]){
    a[0] = 9;
}
//FIXME:This will give an error. Mentioning the row and column size is very important.
// void change2D(int arr[][]){
// arr[0][0] = 12;
// }
// void change2D(int arr[][]){
//                          ^
// 2DArraysIntoFunction.cc: In function 'void change2D(...)':
// 2DArraysIntoFunction.cc:9:1: error: 'arr' was not declared in this scope
//  arr[0][0] = 12; ^~~

void change2D(int arr[2][3]){
arr[0][0] = 12;
}

int main(){

int a[3] = {1,2,3};
cout<<a[0]<<endl;
change(a);
cout<<a[0]<<endl;
int arr[][3] = {{1,2,3},{4,5,6}};
cout<<arr[0][0]<<endl;
change2D(arr);
cout<<arr[0][0]<<endl;


return 0;
}

//OUTPUT
// 1
// 9
// 1
// 12
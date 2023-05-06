//Write a program to print the matirx in spiral form
#include<iostream>
using namespace std;
int main(){
 int m,n;
 cout<<"Enter rows of matrix:";
 cin>>m;
 cout<<"Enter cols of matrix:";
 cin>>n;
 int arr[m][n];
 for(int i = 0;i < m;i++){
    for(int j = 0;j < n;j++){
        cin>>arr[i][j];
    }
 }
cout<<endl;
 //spiral
int minr = 0,minc = 0;
int maxr = m-1,maxc = n-1;
int count = 0;
while(minr<=maxr && minc<=maxc){
//right
for(int j = minc;j <= maxc && count<m*n;j++){
    cout<<arr[minr][j]<<" ";
    count++;
}

minr++;
// if(minr>maxr || minc>maxc) break;
 //down
 for(int i = minr;i <= maxr && count<m*n;i++){
    cout<<arr[i][maxc]<<" ";
    count++;
 }
maxc--;
// if(minr>maxr || minc>maxc) break;
//left
for(int j = maxc;j >=minc && count<m*n;j--){
    cout<<arr[maxr][j]<<" ";
    count++;
}
maxr--;
// if(minr>maxr || minc>maxc) break;
//top
for(int i = maxr;i >=minr && count<m*n;i--){
    cout<<arr[i][minc]<<" ";
    count++;
}
minc++;
}
return 0;
}
/*TODO:
int count = 0; 
count++;
*/
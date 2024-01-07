// Qs_4.Given a positive integer n, generate a n x n matrix filled with elements from 1 to n2 in spiral order.
// Input 1: n = 3
// Output 1: [[1,2,3],[8,9,4],[7,6,5]]
// Input 2: n = 1
// Output 2: [[1]]

#include<iostream>
#include<vector>
using namespace std;
int main(){
 int n;
 cin>>n;
 vector<vector<int>>arr(n,vector<int>(n));
 //spiral
int minr = 0,minc = 0;
int maxr = n-1,maxc = n-1;
int count = 1;
while(minr<=maxr && minc<=maxc){
//right
for(int j = minc;j <= maxc && count<=n*n;j++){
    arr[minr][j]=count;
    count++;
}

minr++;
// if(minr>maxr || minc>maxc) break;
 //down
 for(int i = minr;i <= maxr && count<=n*n;i++){
    arr[i][maxc]=count;
    count++;
 }
maxc--;
// if(minr>maxr || minc>maxc) break;
//left
for(int j = maxc;j >=minc && count<=n*n;j--){
    arr[maxr][j]=count;
    count++;
}
maxr--;
// if(minr>maxr || minc>maxc) break;
//top
for(int i = maxr;i >=minr && count<=n*n;i--){
    arr[i][minc]=count;
    count++;
}
minc++;
}



//print 
for(int i = 0;i < n;i++){
    for(int j = 0;j < n;j++){
        cout<<arr[i][j];

    }
   
}
return 0;
}
/*TODO:
int count = 0; 
count++;
*/
// Given a sorted binary array, efficiently count the total number of 1’s in it.
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
int arr[][4]={{0,1,1,1},{0,0,1,1},{0,1,1,0},{0,0,0,0}};
int m = 4;//row
int n = 4;//col
int row = 0;
int maxOne  = 0;

 
//printing the 2-D array
for(int i = 0;i < 4 ;i++ ){
    for(int j = 0;j < 4;j++ ){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}

//time conplexity : O(m log n)


for(int i = 0;i < m;i++){
int count = 0;
int lo = 0;
int hi = n-1;
int firstPos = -1;

while(lo<=hi){
            int mid = lo + (hi - lo)/2;
            if(arr[i][mid]!=1) 
                lo = mid+1;
            else {
                firstPos = mid;
                hi = mid - 1;
            }
            
        }
    if(firstPos == -1) count = 0;
    else count = n-firstPos;
    if(maxOne < count){
        maxOne = count;
        row = i;
    }
}
cout<<row;


return 0;
}
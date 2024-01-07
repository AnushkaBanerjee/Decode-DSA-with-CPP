// Given a sorted binary array, efficiently count the total number of 1’s in it.
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
int arr[] = {0,0,0,0,1,1};
int n = 6;

// int count = 0;
// for(int i = 0;i < n;i++){
//     if(a[i]!=1){
//         count++;
//     }
//     else break;
// }

// cout<<(n-count);

int lo = 0;
int hi = n-1;
int firstPos = 0;
while(lo<=hi){
            int mid = lo + (hi - lo)/2;
            if(arr[mid]!=1) lo = mid+1;
            else {firstPos = mid;
            hi = mid - 1;
            }
            
        }


        
        cout<<"No of 1's is:"<<n-firstPos;
        
return 0;
}
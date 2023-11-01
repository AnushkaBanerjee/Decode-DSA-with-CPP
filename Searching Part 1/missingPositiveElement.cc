#include<iostream>
using namespace std;
int main(){
int arr[] = {0,1,2,3,5,6,7};
int n = 6;

//linear approach
// for(int i = 0;i < n;i++){
//     if( i != arr[i]) {
//         cout<<i;
//         break;
// }
// }


//time complexity : O(n)

int lo = 0;
int hi = n-1;
int ans = -1;
while(lo<=hi){
    int mid = lo + (hi-lo)/2;
    if(arr[mid] == mid) lo = mid+1;
    else{
        ans = mid;
        hi = mid-1;
    }
}

//The above approach is in O(log n)

cout<<ans;
return 0;
}
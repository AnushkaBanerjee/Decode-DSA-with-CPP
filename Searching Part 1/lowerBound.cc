#include<iostream>
using namespace std;
int main(){
int arr[] = {1,2,4,5,9,15,18,21,24};
int n = 9;
int x = 12;
// for(int i = 0;i < n;i++){
//         if(arr[i]>x){
//         cout<<arr[i-1];
//         break;
//         }
//     }
// above code has T.C = O(n)
int lo = 0;
int hi = n-1;
bool flag = false;
while(lo <= hi){
    int mid = lo + (hi-lo)/2;
    if(arr[mid]==x) {
        flag = true;
        cout<<arr[mid-1];
        break;
    } 
    else if(arr[mid]<x) lo = mid+1;
    else hi = mid-1;

    
}
if(flag == false) cout<<arr[hi];

return 0;
}
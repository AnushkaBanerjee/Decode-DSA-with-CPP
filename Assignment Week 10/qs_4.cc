// Q Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n]
// inclusive in sorted order.
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
int arr[] = {1,2,2,3,4,5};
int n = 6;
int lo = 0;
int hi = n-1;
while(lo <= hi){
    int mid = lo + (hi-lo)/2;
    int count = 0;
    
     if(arr[mid] == mid+1) lo = mid+1;
     else if(arr[mid] == mid){
        if(arr[mid]==arr[mid-1]) {
            cout<<arr[mid];
            break;
        }
        else{
            hi = mid - 1;
        }
        
     }
     
}
return 0;
}
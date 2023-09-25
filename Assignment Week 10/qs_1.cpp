// Given a sorted array of n elements and a target ‘x’. Find the last occurrence of ‘x’ in the array. If ‘x’does not exist return -1.

#include<iostream>
using namespace std;
int main(){
int arr[] = {1,2,3,3,4,4,4,5};
int n = 8;
int x = 4;
int lo = 0;
int hi = n-1;
bool flag = false;
while(lo<=hi){
    int mid = lo + (hi-lo)/2;
    if(arr[mid]==x){
        if(mid==n-1){
            cout<<mid;
            flag = true;
            break;
        }
        else if(arr[mid+1]!=x){
            cout<<mid;
            flag = true;
            break;
        }
        else lo = mid+1;
    }

    else if(arr[mid]<x) lo = mid+1;
    else hi = mid-1;
}

if(flag == false) cout<< -1;

return 0;
}
#include<iostream>
#include<climits>
using namespace std;



// void printMax(int arr[],int size,int idx,int max)
// {
//     if(idx == size) 
//     {
//         cout<<max;
//         return;
//     }

//     if(max<arr[idx]) max = arr[idx];
//     printMax(arr,size,idx+1,max);
// }



int maxInArray(int arr[],int size,int idx)
{
    if(idx == size) return INT_MIN;
    return max(arr[idx],maxInArray(arr,size,idx+1));
}
int main(){
int arr[]= {2,1,6,3,9,0,2};
int n = sizeof(arr)/sizeof(arr[0]);
// printMax(arr,n,0,INT_MIN);
cout<<maxInArray(arr,n,0);
return 0;
}
#include<iostream>
using namespace std;

void display(int arr[],int size,int idx)
{
    if(idx == size) return;
    cout<<arr[idx]<<" ";
    display(arr,size,idx+1);
}



int main(){
int arr[] = {2,1,6,3,9,0,2};
int n = sizeof(arr)/sizeof(arr[0]);
display(arr,n,0);
return 0;
}

//same can be done with vectors

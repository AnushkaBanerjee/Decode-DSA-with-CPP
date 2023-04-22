#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array:";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of the array:";
    //inputs
    for(int i = 0;i < n;i++){
        cin>>arr[i];
    }

    int prod = 1;
    for(int i = 0; i < n;i++){
        prod*=arr[i];
    }
    cout<<"The product of all the elements is:"<<prod;
return 0;
}
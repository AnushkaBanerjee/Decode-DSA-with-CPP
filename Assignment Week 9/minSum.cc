// Given an array of digits (values are from 0 to 9), the task is to find the minimum possible sum of two numbers formed from digits of the array. Please note that all digits of the given array must be used to form the two numbers.
#include<iostream>
using namespace std;
int main(){
int arr[] = {5,1,5,5,2,3};
int n = 6;
for(int i = 0;i < n;i++){
    cout<<arr[i]<<" ";

}
cout<<endl;

//insertion sort
for(int i = 1;i < n;i++){
    int j = i;
    while(j > 0 && arr[j] < arr[j-1])
    {
        swap(arr[j],arr[j-1]);
        j--;
    }
}
for(int i = 0;i < n;i++){
    cout<<arr[i]<<" ";

}
cout<<endl;
//storing the sorted array into an integer
int minNum = 0 ;
for(int i = 0;i < n;i++){
    minNum*=10;
    minNum+=arr[i];
}
cout<<minNum<<endl;
// for second minimum we need to change the sorted is array
for(int i = n-1;i >= 1;i--){
    if(arr[i]!=arr[i-1]){
        swap(arr[i],arr[i-1]);
        break;
    }
}

for(int i = 0;i < n;i++){
    cout<<arr[i]<<" ";

}
cout<<endl;
// second minimum number
int secMinNum = 0 ;
for(int i = 0;i < n;i++){
    secMinNum*=10;
    secMinNum+=arr[i];
}
cout<<secMinNum<<endl;

cout<<"Minimum Sum is:"<<minNum+secMinNum;
return 0;
}

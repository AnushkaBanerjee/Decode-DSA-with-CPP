#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array:";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of the array:";
    //inputs
    for(int i = 0;i < n;i++){
        cin>>arr[i];
    }
    int min = INT_MAX;//(lowest value of integer) or max = arr[0];
    for(int i = 0;i < n;i++){
        if(min > arr[i]) min = arr[i];
    }
    cout<<"Minimum element is:"<<min;
return 0;
}
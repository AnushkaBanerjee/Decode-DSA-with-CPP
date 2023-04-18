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
    int max = max = INT_MIN;//(lowest value of integer) or max = arr[0];
    for(int i = 0;i < n;i++){
        if(max < arr[i]) max = arr[i];
    }
    cout<<"Maximum element is:"<<max;
return 0;
}
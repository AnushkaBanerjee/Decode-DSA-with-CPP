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
    int max1;
    int max2 = max1 = INT_MIN;//(lowest value of integer) or max = arr[0];
    for(int i=0;i < n;i++){
        if(max1 < arr[i]){
            max2 = max1;
            max1 = arr[i];
        }
    }
    if(max2 == INT_MIN) cout<<"No second element exists";
    else cout<<max2<<endl;

return 0;
}
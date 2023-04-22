#include<iostream>
using namespace std;
int main(){
int arr[7]; //= {1,3,6,7,8,9,88};//0 1 2 3 4 5 6 


//taking inputs
for(int i = 0;i < 7;i++){
    cin>>arr[i];
}
//when the array is initialized during declaration it takes the size of the array by default


//printing outputs
for(int i = 0;i < 7;i++){
    cout<<arr[i]<<endl;
}

return 0;
}
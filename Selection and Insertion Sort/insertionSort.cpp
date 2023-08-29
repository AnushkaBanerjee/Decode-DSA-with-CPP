#include<iostream>
using namespace std;
int main(){
//taking array as input
int n;
cout<<"Enter size of array:";
cin>>n;
int arr[n];
for(int i = 0;i < n;i++){
    cin>>arr[i];
}

//selection sort
//Finding the min element in the array search space
//we can use for each loop here
for(int ele : arr){
    cout<<ele<<" ";//we are extracting each and every interger element one by one in the array
}
cout<<endl;





//insertion sort

for(int i = 1;i < n;i++){
    int j = i;

    // while(j>=1){
    //     if(arr[j]>= arr[j-1]) break;
    //     else {
    //         swap(arr[j],arr[j-1]);
    //         j--;
    //     }
    // }
        while(j >= 1 && arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }

}

for(int ele : arr){
    cout<<ele<<" ";//we are extracting each and every interger element one by one in the array
}
cout<<endl;

return 0;
}
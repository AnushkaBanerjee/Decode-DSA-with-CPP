#include<iostream>
#include<climits>
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

//selection sort
for(int i = 0;i < n-1;i++){
    int min = INT_MAX;
    int mindx = -1;
    for(int j = i ;j < n;j++){
        if(arr[j]<min){
            min = arr[j];
            mindx = j;
        }
    }

    swap (arr[i],arr[mindx]);

}

cout<<endl;
//printing the sorted array
for(int ele : arr){
    cout<<ele<<" ";//we are extracting each and every interger element one by one in the array
}




return 0;
}

//This code cannot be optimized like we did in bubble sort

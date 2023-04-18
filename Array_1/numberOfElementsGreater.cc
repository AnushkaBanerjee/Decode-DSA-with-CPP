
//Count the number of elements in given array greater than a given number x
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array:";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array:"<<endl;
    //input
    for(int i = 0;i < n;i++){
        cin>>arr[i];
    }
    //enter element to searched
    int x;
    cout<<"Enter the element to be compared:"<<endl;
    cin>>x;
    //check mark
    int count = 0;
    
    for(int i = 0;i < n;i++){
        if(arr[i]>x) 
            count++;
        
    }
    
    cout<<"The number of elements greater than x is:"<<count;


return 0;
}
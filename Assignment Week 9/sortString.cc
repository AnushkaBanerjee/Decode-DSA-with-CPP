// Given an array of strings arr[] with all strings in lowercase. Sort given strings using Bubble Sort and display the sorted array.
#include<iostream>
#include<string>
using namespace std;
int main(){
    string arr[] = {"raghav","urvi","harsh","vishwa","sanket","anushka","maitryee","ankit","bhola"};
    int n = 9;
    for(int i = 0;i < n;i++){
        cout<<arr[i]<<endl;
    }
    cout<<endl;
    //bubble sort
    for(int i = 0;i < n-1;i++){
        bool flag = true;
        for(int j = 0;j < n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }

    for(int i = 0;i < n;i++){
        cout<<arr[i]<<endl;
    }

return 0;
}
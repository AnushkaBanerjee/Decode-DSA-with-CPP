//PREDICT WHETHER ARRAY CONTAINS DUPLICATES
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
    
    bool result = false;
    
    
    for(int i = 0;i < n;i++){
        for(int j = i+1;j < 5;j++){
            if(arr[i]== arr[j])
                result = true;
                cout<<arr[i]<<endl;
                break;
        }
        
    }

    if(result == true) cout<<"Array has duplicates";
    else cout<<"Array does not have duplicates";

return 0;
}
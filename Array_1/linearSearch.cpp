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
    cout<<"Enter the element to be searched:"<<endl;
    cin>>x;
    //check mark
    bool flag = false;//false -> not present
    
    //search
    
    for(int i = 0;i < n;i++){
        if(arr[i]==x) 
            flag = true;
        
    }
    if(flag == true) cout<<"Element is present";
    else cout<<"404 element not found";
    


return 0;
}
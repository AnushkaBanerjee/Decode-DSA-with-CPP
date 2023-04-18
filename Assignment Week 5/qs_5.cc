#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array:";
    cin>>n;
    int arr[n];
    //inputs
    cout<<"Enter the elements of the array:";
    for(int i = 0; i < n;i++){
        cin>>arr[i];
    }

    int x = 0;
    bool flag = false;
    for(int i = 0;i < n;i++){
        if(arr[i]!=x){
            cout<<x<<endl;
            flag = true;
            break;
        }
        else x++;
    }
    if(flag == false) cout<<"No missing positive number"<<endl;
    
return 0;
}
#include<iostream>
using namespace std;
int main(){
    int arr[] = {4,2,41,1,7};
    int* ptr = arr;//giving address /*TODO: int *ptr = &arr[0] */
    // cout<<ptr<<endl;
    // cout<<ptr[0]<<endl;
    for(int i = 0;i < 5;i++){
        cout<<ptr[i]<<' ';//OR cout<<i[arr]<<endl; OR cout<<i[ptr]<<endl;
    }
    cout<<endl;
    *ptr = 8;

    for(int i = 0;i < 5;i++){
        cout<<*ptr<<' ';
        ptr++;
    }
    cout<<endl;
    ptr = arr;
    cout<<ptr[0]<<endl;
return 0;
}
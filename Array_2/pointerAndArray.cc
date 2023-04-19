#include<iostream>
using namespace std;
int main(){
    int arr[] = {4,2,41,1,7};
    int* ptr = arr;//giving address /*TODO: int *ptr = &arr[0]*/
    // cout<<ptr<<endl;
    // cout<<ptr[0]<<endl;
    for(int i = 0;i < 5;i++){
        cout<<ptr[i]<<' ';
    }
    cout<<endl;
    *ptr = 8;

    for(int i = 0;i < 5;i++){
        cout<<*ptr<<' ';
        ptr++;
    }

return 0;
}
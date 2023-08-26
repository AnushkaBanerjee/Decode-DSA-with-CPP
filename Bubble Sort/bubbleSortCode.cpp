#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[6]={5,4,6,3,2,1};
    int n = 6;


    for(int i = 0;i < 6;i++){
    cout<<arr[i]<<" ";
    }
//     for(int i=0;i < n-1;i++){//n-1 passes
//         //traverse
//         for(int j=0; j < n-1-i;j++){
//             if(arr[j]>arr[j+1]){//swap
//             // int temp = arr[j];
//             // arr[j]=arr[j+1];
//             // arr[j+1]=arr[j];
//             swap(arr[j],arr[j+1]);
//         }
//     }
// }
// cout<<endl;



//bubble Sort optimised for best case

for(int i=0;i < n-1;i++){//n-1 passes
        //traverse
        bool flag = true;
        for(int j=0; j < n-1-i;j++){
            if(arr[j]>arr[j+1]){//swap
            // int temp = arr[j];
            // arr[j]=arr[j+1];
            // arr[j+1]=arr[j];
            swap(arr[j],arr[j+1]);
            flag = false;
        }
    }
    if (flag == true){//swap didn't happen
        break;
    }
}
cout<<endl;
for(int i = 0;i < 6;i++){
    cout<<arr[i]<<" ";
}
return 0;
}

// Time Complexity :
// Best Case : O(n)
// Avg Case : O(n^2)
// Worst Case : O(n^2)
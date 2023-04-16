#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter no of rows:";
cin>>n;
// for(int i = 1;i <= n;i++){
//     for(int j = 1;j <= i;j++){
//         cout<<"*";
//     }
//     cout<<endl;
// }

// for(int i = 1;i < n;i++){
//     for(int j = 1;j < n+1-i;j++){
//         cout<<"*";
//     }
//     cout<<endl;
// }
//no of stars + row no = 2*n
for(int i = 1;i <= 2*n-1;i++){
    if(i <= n){
        for(int j=1;j<= i;j++){
            cout<<"*";
        }
    }
    
    else{
        for(int j = 1; j <= 2*n-i;j++){
            cout<<"*";
        }
    }
    cout<<endl;
}

return 0;
}
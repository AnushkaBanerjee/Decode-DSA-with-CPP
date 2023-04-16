#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter no of rows: ";
cin>>n;
// for(int i = 1;i <= n;i++){
//     // int a = 1;
//     for(int j = 1;j <= n-i;j++){
//         cout<<" ";
//     }
//     for(int j = 1;j<=2*i-1;j++){
//         // a+=2; 
//         cout<<"*";
//     }
//     cout<<endl;
// }

//method 2-->
//nst(no of stars ) & nsp(no of spaces)
//1st line --> n-1 spaces & nsp--
//nst = 1 , nst+=2

int nst = 1,nsp = n-1;

for(int i = 1;i <= n;i++){
    for(int j = 1;j<=nsp;j++){
        cout<<" ";
        
    }
    nsp--;

    for(int k = 1;k<=nst;k++){
        cout<<"*";
        
    }
    nst+=2;

    cout<<endl;



}

return 0;
}
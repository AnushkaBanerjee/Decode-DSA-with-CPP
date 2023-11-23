//      *
//     ***
//    * * *
//   *  *  *
//  *   *   *
// ***********
//  *   *   *
//   *  *  *
//    * * *
//     ***
//      *




#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter n:";
cin>>n;
int m = 2*n-1;
for(int i = 0;i < m;i++){
    for(int j = 0;j < m;j++){
        //only for star printing
        if(i == m/2 || j == m/2||abs(i-j)==m/2 || i+j == m/2 ||i+j == 3*(n-1)){
            cout<<"*";
        }
        //for space printing
        else cout<<" ";
    }
    cout<<endl;
}

return 0;
}
// n = 5
// *         *
//  *       *
//   *    *
//    *  *
//     *



#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter the no of lines:";
cin>>n;

for(int i = 1;i <= n-1;i++){
    for(int j = 1;j <= i-1;j++){
        cout<<" ";
    }
    cout<<"* ";
    int m = 2*(n-i-1);
    for(int k = 1;k <= m ;k++){
        cout<<" ";
    }
    cout<<"*"<<endl;
    
}
for(int i = 1;i <= n-1;i++){
    cout<<" ";
}
cout<<"*";
return 0;
}
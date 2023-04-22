#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter no of rows:";
cin>>n;
for(int i = 1;i<=n;i++){
    for(int j = 1;j <=i;j++){
        if(i%2==0)cout<<(char)(j+64)<<" ";
        else cout<<j<<" ";
    }
    cout<<endl;
}
// for(int i = 1;i<=n;i++){
//     for(int j = 1;j <=i;j++){
//         cout<<(char)(j+64)<<" ";
//     }
//     cout<<endl;
// }
return 0;
}
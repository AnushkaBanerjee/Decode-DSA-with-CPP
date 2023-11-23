//    A
//   BAB
//  CBABC
// DCBABCD


#include<iostream>
using namespace std;
int main(){
 int n;
 cout<<"Enter no of rows:";
 cin>>n;
 for(int i = 1;i <= n;i++){
    for(int j = 1;j <= n-i;j++){
        cout<<" ";
    }
    for(int k = i;k >= 1;k--){
        cout<<(char)(k+64) ;
    }
    if(i>=2){
        char a= 'B';
        for(int j = 1;j < i;j++){
            cout<<a;
            a++;
        }
    }
    cout<<endl;
 }
return 0;
}
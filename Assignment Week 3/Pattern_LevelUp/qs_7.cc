// n  = 4
//     1
//    2 2
//   3   3
//  4     4




#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter n:";
cin>>n;
int a = 2;
for(int i = 1;i < n;i++){
    cout<<" ";
}
cout<<1<<endl;

for(int i = 1;i <=n-1;i++){
    for(int j = 1;j<=(n-1)-i;j++){
        cout<<" ";
    }
    
    cout<<a;
    
    
    for(int j = 1;j <= 2*i-1;j++){
        cout<<" ";
    }
    cout<<a;
    a++;
    cout<<endl;
}
return 0;
}
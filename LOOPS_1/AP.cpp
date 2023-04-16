#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter n: "<<endl;
cin>>n;

// for(int i =1;i <=(2*n-1);i+=2){
//     cout<<i<<endl;
// }

//separate variable
int a = 4;
for(int i=0;i < n;i++){
    cout<<a<<endl;
    a+=3;
}


return 0;
}
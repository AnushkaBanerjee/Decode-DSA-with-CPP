#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter n: "<<endl;
cin>>n;

// for(int i =1;i <=(2*n-1);i+=2){
//     cout<<i<<endl;
// }

//1 2 4 8 16...

//separate variable
int a = 1;
for(int i=0;i < n;i++){
    cout<<a<<endl;
    a*=2;
}


/*2 6 18 54...
int a = 2;
for(int i=1;i<=n;i++){
    cout<<a<<endl;
    a*=3;
}*/


return 0;
}
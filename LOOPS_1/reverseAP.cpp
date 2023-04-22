#include<iostream>
using namespace std;
int main(){

int a  = 100;
// for(int i =0 ;i<=34;i++){
//     cout<<a<<endl;
//     a = a-3;
// }

//the following syntax is also applicable
for(;a>0;){//for(int a = 100;a>0;a=a-3)
    cout<<a<<endl;
    a=a-3;//this line will be ommited otherwise
}
return 0;
}
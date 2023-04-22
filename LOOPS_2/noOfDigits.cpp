#include<iostream>
using namespace std;
int main(){
int n,count=0;
cout<<"Enter a number:"<<endl;
cin>>n;
//or int a =n;
if(n == 0) count = 1;

for(;n>0;){//while can be preferrable
    count++;
    n/=10;
}
//if(a==0) cout<<1<<;
cout<<"The number of digits is:"<<count<<endl;

return 0;
}
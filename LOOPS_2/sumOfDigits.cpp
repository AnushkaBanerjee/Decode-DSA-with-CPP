#include<iostream>
using namespace std;
int main(){
int n,sum=0;
cout<<"Enter a number:"<<endl;
cin>>n;
//or int a =n;
if(n == 0) sum = 0;

while(n>0){//while can be preferrable
    sum+=(n%10);
    n/=10;
}
//if(a==0) cout<<1<<;
cout<<"The sum of digits is:"<<sum<<endl;

return 0;
}
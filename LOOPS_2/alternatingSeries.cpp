#include<iostream>
using namespace std;
int main(){
// int n;
// cout<<"Enter a number:";
// cin>>n;
// int sum = 0;
// for(int i = 1;i <= n;i++){
//    if(i%2!=0)sum+=i;
//    else sum-=i;

// }//this can be done without loops

// cout<<sum;
int n,sum=0;
cout<<"Enter a number:"<<endl;
cin>>n;

if(n%2==0)sum=-n/2;//this is for even no of pairs

else sum=(-n/2)+n;//this is for odd number of n

cout<<sum;
return 0;
}
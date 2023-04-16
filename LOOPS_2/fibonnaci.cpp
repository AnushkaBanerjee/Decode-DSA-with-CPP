#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter a number:";
cin>>n;
int a = 0;
int b = 1;
int sum = 0;
if(n == 1) sum = 0;
if(n == 2) sum = 1;


for(int i = 3;i<=n;i++){
    sum = a + b;
    a = b;
    b = sum;

}
cout<<sum;
return 0;
}
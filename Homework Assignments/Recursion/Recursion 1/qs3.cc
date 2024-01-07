// Qs-> Given a positive integer, return true if it is a power of 2
#include<iostream>
using namespace std;

bool powOf2(int n)
{
    if(n==1) return true;
    if(n % 2 == 0) return powOf2(n/2);
    return false;


}


int main(){
int n;
cout<<"enter the number:";
cin>>n;
cout<<powOf2(n);
return 0;
}
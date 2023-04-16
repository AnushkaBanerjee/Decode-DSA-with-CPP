#include<iostream>
using namespace std;
void find(int n,int *ptr1,int *ptr2){
    *ptr2 = n%10;//lastDigit
    while(n > 9){
        n/=10;
    }
    *ptr1 = n;
    return;
}



int main(){
int n;
cin>>n;
int fD,lD;
int *ptr1 = &fD;
int *ptr2 = &lD;
find(n,ptr1,ptr2);
cout<<fD<<" "<<lD;
return 0;
}
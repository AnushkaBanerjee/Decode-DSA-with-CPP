#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter a number:"<<endl;
cin>>n;

int lastDigit;
if(n==0)cout<<0;

while(n>0){
    lastDigit = n%10;//this gives the last digit of the number
    cout<<lastDigit;
    n/=10;
}

/*or this can also be written as follows
int reverse = 0,lastDigit = 0,n;
cin>>n;
while(n>0){
    reverse*=10;
    lastDigit=n%10;
    reverse+=lastDigit;
    n/=10;
}
*/
return 0;
}
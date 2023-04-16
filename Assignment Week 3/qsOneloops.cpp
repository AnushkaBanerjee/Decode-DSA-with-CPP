#include<iostream>
using namespace std;
int main(){
int number;
cout<<"Enter the number:";
cin>>number;

int lastDigit,sum=0;

while(number>0){
    lastDigit=number%10;
    //or-->sum+=(lastDigit%2==0? lastDigit : 0)
    if(lastDigit % 2==0){
        sum+=lastDigit;
    }
    number/=10;
}

cout<<"Sum of even numbers is:"<<sum;
return 0;
}
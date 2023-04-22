#include<iostream>
using namespace std;
int main(){
int number,reverse = 0,lastDigit;
cout<<"Enter a number:";
cin>>number;
int n = number;
while(number>0){
    reverse*=10;
    lastDigit = number%10;
    reverse+=lastDigit;
    number/=10;
}

cout<<"Reverse of the number is :"<<reverse<<endl;

cout<<"Required sum  is: "<<n+reverse<<endl;

return 0;
}
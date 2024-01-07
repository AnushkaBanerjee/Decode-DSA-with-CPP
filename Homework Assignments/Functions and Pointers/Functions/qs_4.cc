//Write a function to count the number of digits in a number and then print the square of this number.

#include<iostream>
using namespace std;

int countDigits(int n){
    int count = 0;
    if(n == 0) count++;
    while(n>0){
        count++;
        n/=10;
    }
    return count;
}


void square(int n){
   cout<<n*n;
}

int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    int digit = countDigits(n);
    cout<<digit<<endl;
    square(n);

return 0;
}
// Qs-> Write a program to calculate the sum of odd numbers between a and b (both inclusive) using recursion


#include<iostream>
using namespace std;

int sumOdd(int lowerLimit,int upperLimit)
{
    if(lowerLimit > upperLimit) return 0;
    if(lowerLimit%2 == 0) return sumOdd(lowerLimit+1,upperLimit);
    return lowerLimit + sumOdd(lowerLimit+2,upperLimit);
}


int main(){
int a ,b ;
cin>>a>>b;
// for(int i = a;i <= b;i++)
// {
//     if(i % 2 != 0)
//     {
//         sum+=i;
//     }
// }
// cout<<sum;
cout<<sumOdd(a,b)<<endl;

return 0;
}
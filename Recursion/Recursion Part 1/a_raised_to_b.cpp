#include<iostream>
using namespace std;
//Iterative approach
// int power(int a , int b){
 //      if(a == 0 && b == 0) {
//     cout<<"0 raised to power 0 is not defined";
//  }  
//      if(a == 0) return 0;
//     int p = 1;
//     for(int i = 1;i <=b ;i++){
//         p*=a;
//     }
//     return p;
// }


//Recursive approach
int pow(int a ,int b){
    if(b == 0) return 1;
    return (a*pow(a,b-1));
}




int main(){
int a,b;
cout<<"Enter base :";
cin>>a;
cout<<"Enter exponent :";
cin>>b;
cout<<a<<"  raised to the power "<<b<<" is "<<pow(a,b);
return 0;
}
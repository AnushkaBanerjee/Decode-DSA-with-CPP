#include<iostream>
using namespace std;
int main(){
    // int x;//5
    // cout<<"Enter the integer number:"<<endl;
    // cin>>x;
    // cout<<(float)x/2;//typecasting is used x--> 5.0
    // x/2 --> 2.5


    //Take float input and print the fractional part of the real number
    //9.7 --> 0.7
    //greatest integer function --> 9.7 --> 9 i.e [x](denotaiton)
    //fractional value denoted by --> {x} = x - [x]
    //-1.3 --> -1.3 -[-2] --> 0.7
    float x;
    cin>>x;//9.1
    int y = (int)x;//9
    if(y<0) y = y-1;
    float z = (float)y;
    x = x-z;
    cout<<x;

}
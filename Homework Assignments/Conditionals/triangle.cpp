// Qs_1->Given the length and breadth of a rectangle, write a program to find whether numerically the area of the rectangle is greater than its perimeter.

#include<iostream>
using namespace std;
int main(){
float r,l,b;
cin>>r>>l>>b;
float pi = 3.1415,area = pi*r*r,perimeter = l*b;

if(area > perimeter){
    cout<<"area is greater";
}
else if(area < perimeter){
    cout<<"perimeter is greater";
}
else{
    cout<<"Both are equal";
}

return 0;
}
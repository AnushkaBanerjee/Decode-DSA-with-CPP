//: Write a function that takes the radius of a circle as an argument and returns its area.

#include<iostream>
using namespace std;
double areaOfCircle(int r){
    double a = 3.14*r*r;
    return a;
}


int main(){
    int radius;
    cout<<"Enter radius of the circle:";
    cin>>radius;
    double area = areaOfCircle(radius);
    cout<<area;
return 0;
}
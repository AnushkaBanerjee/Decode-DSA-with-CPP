#include<iostream>
using namespace std;
int main(){
   float a,b,c;
   cout<<"Enter the sides of the triangle";
   cin>>a>>b>>c;

//check which side type of triangle according to side

if((a ==b)||(b==c)||(c==a)){
    cout<<"Isosceles triangle";
} 
else if((a ==b)&&(b==c)){
    cout<<"Equilateral triangle";

}
else
    cout<<"Scalene triangle";
}

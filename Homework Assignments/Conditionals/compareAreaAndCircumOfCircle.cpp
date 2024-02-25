#include<iostream>
using namespace std;
int main(){
float r;
cin>>r;
float pi = 3.1415,area = pi*r*r,cirCum = 2*pi*r;

if(area > cirCum){
    cout<<"area is greater";
}
else if(area < cirCum){
    cout<<"circumference is greater";
}
else{
    cout<<"Both are equal";
}

return 0;
}
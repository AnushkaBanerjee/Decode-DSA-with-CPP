// Qs->Given three points (x1, y1), (x2, y2) and 
// (x3, y3), write a program to check if all the three points fall on one straight line.
#include<iostream>
using namespace std;
int main(){
int x1,x2,x3,y1,y2,y3;
cout<<"enter the coordinates:"<<endl<<"x1:\ny1:\nx2:\ny2:\nx3:\ny3:\n";
cin>>x1>>y1>>x2>>y2>>x3>>y3;
int collinear = x1*(y2 - y3) + x2*(y3 - y1) + x3*(y1 - y2);
if(collinear == 0){
 cout<<"The points lie on the same straight line";
}
else{
    cout<<"The points donot lie on the same straight line";
}

return 0;
}
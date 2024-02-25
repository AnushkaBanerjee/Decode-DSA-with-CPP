#include<iostream>
using namespace std;
int main(){
int x,y;
cin>>x>>y;
if(x == 0 && y == 0){
    cout<<"point lies on the origin";
}
else if(x == 0 && y!=0){
    cout<<"point lies on y-axis";
}
else{
    cout<<"point lies on x-axis";
}
return 0;
}
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the sides of a triangle:";
    cin>>a>>b>>c;
if((a+b)>c && (b+c)>a && (a+c)>b){
    cout<<"True";
}
else{
    cout<<"False";
}

}
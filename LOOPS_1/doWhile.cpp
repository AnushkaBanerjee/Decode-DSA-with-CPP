#include<iostream>
using namespace std;
int main(){
int i=11;
//this is still executed once
do{
    cout<<i<<endl;
    i++;
}while(i<=10);


return 0;
}
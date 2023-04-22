#include<iostream>
using namespace std;
int main(){
    int cp,sp;
    //cost price
    cout<<"Enter the COST PRICE: "<<endl;
    cin>>cp;
    //selling price
    cout<<"Enter the SELLING PRICE: "<<endl;
    cin>>sp;
 
    if(cp > sp){
        cout<<"Profit of "<<cp-sp<<" is incurred!";
    }
    else if(cp == sp){
        cout<<"No profit or loss incurred!";
    }
    else{
        cout<<"Loss of "<<sp-cp<<" is incurred!";
    }
}
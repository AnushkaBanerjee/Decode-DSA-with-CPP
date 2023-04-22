#include<iostream>
using namespace std;
int main(){
 int monthNo;
 cout<<"Enter month number";
 cin>>monthNo;
 //1 3 5 7 8 10 12 -> 31 days
 //4 6 9 11 -> 30 days
 //2 -> 28 days
 switch((monthNo<=7 && monthNo%2!=0)||(monthNo>=8 && monthNo%2==0)){// conditions in switch statement
    case 1:
    cout<<"31";
 }
 
 switch(monthNo == 4||monthNo == 6||monthNo == 9||monthNo == 11){
    case 1:
    cout<<"30";
 }
 switch(monthNo){
    case 2:
    cout<<"28";
 }

return 0;
}
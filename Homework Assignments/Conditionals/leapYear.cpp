#include<iostream>
using namespace std;
int main(){
int year;
cout<<"Enter the year:";
cin>>year;
if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0){
    cout<<"Year is a leap year";
} 
else{
    cout<<"Not a leap year";
}
return 0;
}
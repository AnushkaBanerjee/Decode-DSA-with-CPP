#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter no. of students:";
cin>>n;


int marks[n];//0 to n-1
//input
cout<<"Enter the marks:";
for(int i = 0;i<=5;i++){
    cin>>marks[i];
    if(marks[i]<35)cout<<i+1<<" ";
}

// for(int i = 0;i<=5;i++){
//     if(marks[i]<35)cout<<i+1<<" ";
// }




return 0;
}
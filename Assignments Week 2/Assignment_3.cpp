#include<iostream>
using namespace std;
int main(){
//Qs_1-->
// int i = 1;
// while(i <= 100){
//     cout<<i<<endl;
//     i+=2;
// }

//Qs_2-->
// int i;
// for(i = 3;i<=100;i+=3){
    
//         cout<<i<<endl;
    
// }

//Qs_3-->
// int n;
// cout<<"Enter the number whose table is to be found: ";
// cin>>n;

// for(int i=0;i <= 20;i+=n){//or i++
//     cout<<i<<endl;//cout<<i*n<<endl
// }

//Qs_4-->
//int n;
//cout<<"Enter the nth position:"<<endl;
//cin>>n;
// int a = 4;
// for(int i = 1;i <=n;i++){
//     cout<<a<<endl;
//     a+=3;
// }
// for(int i = 4;i <= 3*n+1;i+=3){
//     cout<<i<<endl;
// }

//Qs_5-->
// int n;
// cout<<"Enter nth position:"<<endl;
// cin>>n;
// int a = 3;
// for(int i = 0;i < n;i++){
//     cout<<a<<endl;
//     a*=4;
// }

//Qs_6-->

// int i = 97;
// while(i < 123){
//     cout<<i<<" "<<(char)i<<endl;
//     i++;
// }


int i = 0;
while(i < 26){
    cout<<"ASCII value of "<<(char)(i+'A')<<" is "<<(int)(i+'A')<<endl;
    i++;
}
return 0;
}
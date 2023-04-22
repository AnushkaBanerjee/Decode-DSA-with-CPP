#include<iostream>
using namespace std;
int main(){
int x = 7;
int *ptr = &x;//0x61ff08
cout<<*ptr<<endl;
cout<<ptr<<endl;
*ptr+=1;//0x61ff0c
cout<<*ptr<<endl;//6422284-->This is a garbage value
int a = 15;
int* p = &a;
int b = (*p)++;
cout<<a<<" "<<b;
return 0;
}
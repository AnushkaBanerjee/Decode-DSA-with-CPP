#include<iostream>
using namespace std;
void swap(int *x,int *y){
int temp = *x;
*x = *y;
*y = temp;

}


int main(){
int a = 8 ,b = 6;
//cin>>a>>b;
 swap(&a,&b);//This is pass by reference
 cout<<a<<" "<<b;
return 0;
}
//This program will  work 
//This will work with passing by reference
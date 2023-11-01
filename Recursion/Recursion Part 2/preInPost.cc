#include<iostream>
using namespace std;

void pip(int n)
{
    if(n==0) return;
    cout<<"Pre "<<n<<endl;//work
    pip(n-1);//call 1
    cout<<"In "<<n<<endl;//work
    pip(n-1);//call 2
    cout<<"Post "<<n<<endl;//work
}

int main()
{
   int n;
   cin>>n;
   pip(n);
return 0;
}
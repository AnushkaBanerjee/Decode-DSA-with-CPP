#include<iostream>
using namespace std;


void zigzag(int n)
{
    if(n==0) return;
    cout<<n;//work
    zigzag(n-1);//call 1
    cout<<n;//work
    zigzag(n-1);//call 2
    cout<<n;//work
}
int main()
{
    int n;
    cin >> n;
    zigzag(n);
    return 0;
}
// ctrl + k ctrl + f -> format selected text in vs code
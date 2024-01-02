//Qs -> Print increasing decreasing sequence


#include<iostream>
using namespace std;


void printIncreasingDecreasingSeq(int x,int n){
    if(x >= n){
        cout<<n<<endl;
         return;
    }
    cout<<x<<endl;
    printIncreasingDecreasingSeq(x+1,n);
    cout<<x<<endl;
}


int main(){
    int n;
    cout<<"Enter a number :";
    cin>>n;
    printIncreasingDecreasingSeq(1,5);
    return 0;
}
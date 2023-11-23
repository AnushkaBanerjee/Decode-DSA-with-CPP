//Q7=>If an array arr contains n elements, then check if the given array is a palindrome or not .
#include<iostream>
#include<vector>

using namespace std;

bool isPalindrome(vector<int>&a){
    for(int i=0;i < a.size();i++){
        if(a[i]!=a[a.size()-i-1])return false;
    }
    return true;
}


int main(){
vector<int> v;
int n;
cout<<"Enter no of elements of the array:";
cin>>n;

//taking inputs
cout<<"Enter elements of the array:"<<endl;
for(int i = 0 ;i < n;i++){
    int p;
    cin>>p;
    v.push_back(p);
}

cout<<"Is the array a Palindrome?"<<isPalindrome(v)<<endl;

}
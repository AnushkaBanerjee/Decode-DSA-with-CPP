// Input a string of size n and update all the odd positions in the string to character ‘#’. Consider
// 0-based indexing.


#include<iostream>
using namespace std;
int main(){

//input string
string s;

getline(cin,s);



//determining odd positions
for(int i = 0; s[i]!='\0';i++){
    if(i % 2!=0)s[i]='#';
}

cout<<s;
return 0;
}
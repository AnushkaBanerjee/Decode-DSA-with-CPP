// Input a string of length n and count all the consonants in the given string.
#include<iostream>
using namespace std;
int main(){

    // TODO: The following is a character  array:
// int n;

// cout<<"Enter length of the string:";
// cin>>n;

// char str[n];
// for(int i = 0;i < n;i++){
//     cin>>str[i];
// }

// for(int i = 0;i < n;i++){
//     cout<<str[i];
// }
string s;
getline(cin,s);
int count = 0;
for(int i = 0;s[i]!= '\0';i++)
{
    if(s[i] == 'a'||s[i] == 'e'||s[i] == 'i'||s[i] == 'o'||s[i] == 'u') count++;

}

cout<<s.length()-count;
return 0;
}
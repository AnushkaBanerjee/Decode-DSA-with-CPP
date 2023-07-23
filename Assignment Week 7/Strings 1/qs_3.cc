// Check whether the given string is palindrome or not.
#include<iostream>
using namespace std;
int main(){
string s;
getline(cin,s);
bool value ;
for (int i = 0; s[i] != '\0'  ; i++)
{
    /* code */
    if(s[i]==s[s.size()-i-1]) value = true;
    else value = false;

}
cout<<value;
return 0;
}
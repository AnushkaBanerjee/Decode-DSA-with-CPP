//Input a string and concatenate with its reverse string and print it.
// Input : str = "PWSkills"
// Output : "PWSkillssllikSWP"
// Input : str = "pw"
// Output : "pwwp"
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
string s;
cin>>s;
string t;
t=s;
reverse(t.begin(),t.end());

cout<<s+t;


return 0;
}
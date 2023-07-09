// Given a string print each word of it in a new line
#include<iostream>
#include<sstream>
using namespace std;
int main(){
string str;
getline(cin,str);
stringstream ss(str);
string temp;
while(ss>>temp){
cout<<temp<<endl;
}

return 0;
}

// Ouput:
// My name is Anushka Banerjee
// My
// name
// is
// Anushka
// Banerjee
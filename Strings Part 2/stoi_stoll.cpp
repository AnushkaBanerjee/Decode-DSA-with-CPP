//built-in functions stoi vs stoll. We saw about built-in function to_string before
//Now we will convert string to integer(stoi) and string to long long (stoll)
#include<iostream>
#include<string>
using namespace std;
int main(){
string str = "1234564556667";
// int x = stoi(str);

// cout<<x;//1234

long long y = stoll(str);//For storing bigger values
cout<<y;//1234564556667
return 0;
}
// if a string like "0000123" is given the integer will be 123(leading '0's are ignored)
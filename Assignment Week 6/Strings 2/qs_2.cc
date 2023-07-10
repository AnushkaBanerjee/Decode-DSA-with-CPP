// Find the second largest digit in the string consisting of digits from ‘0’ to ‘9’.
// Input : str = "2947578"
// Output : 8
// Input : str = "1241"
// Output : 2
#include<iostream>
using namespace std;
int main(){
string str;
cin>>str;

int secLar;
int lar = secLar =(int) str[0];
for(int i = 0;str[i]!='\0';i++){
    if(lar <(int) str[i]) {
        secLar = lar;
        lar =(int) str[i];
        
    }
}
cout<<(char)secLar;
return 0;
}
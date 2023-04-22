#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter a number: "<<endl;
cin>>n;
bool flag = true;
for(int i = 2;i < n ;i++){
    if(n%i==0){
        flag = false;
        break;
    }
}
//when ip is 2 --> 2 < 2 is false so loop will not work but we consider initially that flag is true 
 
if(n == 1) 
cout<<"1 is neither prime nor composite\n";

else if(flag==true)cout<<n<<" is prime";

else cout<<n<<" is composite";
//  cout<<n<<" is a composite number"<<endl;
       
return 0;
}
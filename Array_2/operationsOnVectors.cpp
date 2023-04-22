#include<iostream>
#include<vector>
using namespace std;
int main(){

 //zero sized array
 vector<int> v;//you need not mention the size
 
 //inserting / input do not use[]
 v.push_back(6);//6
 //push_back-> array of capacity 1 is created
//   cout<<"size "<<v.size()<<endl;
  
//   cout<<"cap "<<v.capacity()<<endl;
 
 v.push_back(1);//6 1
 //push_back-> array of capacity double(1+1) than prev is created 
//  cout<<"size "<<v.size()<<endl;
//  cout<<"cap "<<v.capacity()<<endl;



 v.push_back(9);//6 1 9 
 //push_back-> array of capacity double(2+2) than prev is created 
//  cout<<"size "<<v.size()<<endl;
//  cout<<"cap "<<v.capacity()<<endl;


 v.push_back(0);//6 1 9 0
 //...vector capacity goes upto like(i+i) Where i = 1,2,3,4...
// cout<<"size "<<v.size()<<endl;
// cout<<"cap "<<v.capacity()<<endl;
v.push_back(6);
v.push_back(1);
v.push_back(9);
v.push_back(0);
v.push_back(16);
for(int i = 0;i<v.size();i++){
    cout<<v[i]<<" ";
}
cout<<endl;
v.pop_back();
v.pop_back();

for(int i = 0;i<v.size();i++){
    cout<<v[i]<<" ";
}

return 0;
}
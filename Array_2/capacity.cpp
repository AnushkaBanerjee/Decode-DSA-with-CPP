#include<iostream>
#include<vector>
using namespace std;
int main(){

 //zero sized array
 vector<int> v;//you need not mention the size
 
 //inserting / input do not use[]
 v.push_back(6);//1 1
 v.push_back(1);//2 2
 v.push_back(9);//3 4 
 v.push_back(0);//4 4 
 v.push_back(6);//5 8
 v.push_back(1);//6 8
 v.push_back(9);//7 8
 v.push_back(0);//8 8
 v.push_back(16);//9 16
 v.push_back(16);
 v.push_back(16);
 v.push_back(16);
 v.push_back(16);
 v.push_back(16);
 v.push_back(16);
 v.push_back(16);
 v.push_back(16);

 cout<<"Capacity is "<<v.capacity()<<endl;
 cout<<"Size is "<<v.size()<<endl;
// for(int i = 0;i<v.size();i++){
//     cout<<v[i]<<" ";
// }

v.pop_back();
v.pop_back();
v.pop_back();
v.pop_back();
v.pop_back();
v.pop_back();

cout<<"Capacity is "<<v.capacity()<<endl;
 cout<<"Size is "<<v.size()<<endl;
return 0;
}
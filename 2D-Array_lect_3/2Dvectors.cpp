#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int>v1;//1 3 5
v1.push_back(1);
v1.push_back(3);
v1.push_back(5);


vector<int>v2;//4 9
v2.push_back(4);
v2.push_back(9);

vector<int>v3;//6 8 10 11 2
v3.push_back(6);
v3.push_back(8);
v3.push_back(10);
v3.push_back(11);
v3.push_back(2);


vector<vector<int>>v;
v.push_back(v1);
v.push_back(v2);
v.push_back(v3);

cout<<v[1][0];


//  FIXME:
// cout<<v[0][3];//invalid
return 0;
}
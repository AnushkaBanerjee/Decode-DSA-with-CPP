#include<iostream>
#include<vector>


using namespace std;

void change(vector<int> &a){//a->100 10 6 1 // void change(vector<int> &a)
    
    cout<<&a<<endl;
    a[0]=100;
    for(int i = 0;i < a.size();i++){
    cout<<a[i]<<" ";
 }
 cout<<endl;
}
//Vectors are passed by value




int main(){
 vector<int> v;
 v.push_back(9);
 v.push_back(10);
 v.push_back(6);
 v.push_back(1);

 for(int i = 0;i < v.size();i++){
    cout<<v[i]<<" ";
 }
 cout<<endl;
 
cout<<&v<<endl;
 
 change(v);

 for(int i = 0;i < v.size();i++){
    cout<<v[i]<<" ";
 }
return 0;
}
/*OUTPUT:


9 10 6 1 
100 10 6 1 
9 10 6 1*/
//find last occurence of an element in array

#include<iostream>
#include<vector>

using namespace std;
int main(){
 vector<int> v;

 int elt,n;
 cout<<"Enters the no of elements:";
 cin>>n;

 //input
 for(int i = 0;i < n;i++){
    cin>>elt;
    v.push_back(elt);
 }

 //output
for(int i = 0;i < v.size();i++){
    cout<<v[i]<<" ";
 }
 cout<<endl;


 int x;
 cout<<"Enter the element to be searched:";
 cin>>x;

//loop to find last occurence of element
int idx = -1;
for(int j = v.size()-1;j >= 0;j--){
   if(v[j]== x) {
   idx = j;
   break;
   }

 }

 if(idx==-1) cout<<"Element missing!"<<endl;
 else cout<<"Element last occurs at position : "<<idx<<endl;

return 0;
}
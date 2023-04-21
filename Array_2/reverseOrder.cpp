#include<iostream>
#include<vector>
using namespace std;

void display(vector<int>&a){
    for(int i = 0;i < a.size();i++){
        cout<<a[i]<<" ";
    }
}


int main(){
 vector<int> v1;
 int n;
 cout<<"Enter size of array: ";
 cin>>n;


//taking  array elements as input
 cout<<"Enter elements of the array:"<<endl;
 for(int i=0;i < n;i++){
    int x;
    cin>>x;
    v1.push_back(x);

 }

 display(v1);
 cout<<endl;
//creating 2nd vector
 vector<int> v2(v1.size());

 for(int i = 0;i < v1.size();i++){
    v2[i] = v1[(v1.size()-1)-i] ;
    
    }

  display(v2);  
return 0;
}
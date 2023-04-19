#include<iostream>
#include<vector>
using namespace std;
int main(){

 //zero sized array
 vector<int> v;//you need not mention the size
 
 //inserting / input do not use[]
 v.push_back(6);//6
 //push_back-> array of capacity 1 is created
  cout<<"size "<<v.size()<<endl;
  
  cout<<"cap "<<v.capacity()<<endl;
 
 v.push_back(1);//6 1
 //push_back-> array of capacity double(1+1) than prev is created 
 cout<<"size "<<v.size()<<endl;
 cout<<"cap "<<v.capacity()<<endl;



 v.push_back(9);//6 1 9 
 //push_back-> array of capacity double(2+2) than prev is created 
 cout<<"size "<<v.size()<<endl;
 cout<<"cap "<<v.capacity()<<endl;


 v.push_back(0);//6 1 9 0
 //...vector capacity goes upto like(i+i) Where i = 1,2,3,4...
cout<<"size "<<v.size()<<endl;
cout<<"cap "<<v.capacity()<<endl;

/*FIXME: The following will give error if push back is not used initially*/
// v[0]=6;
// v[1]=1;
// v[2]=9;
// v[3]=0;


//If you want to update / access

cout<<"Elements in vector are:"<<endl;
    v[0]=88;
    cout<<v[0]<<endl;
    cout<<v[1]<<endl;
    cout<<v[2]<<endl;
    cout<<v[3]<<endl;

return 0;
}
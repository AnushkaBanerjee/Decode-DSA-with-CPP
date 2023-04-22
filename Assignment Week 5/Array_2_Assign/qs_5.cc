//Q5=>Given an array of integers, change the value of all odd indexed elements to its second multiple
//and increment all even indexed values by 10.

#include<iostream>
#include<vector>


using namespace std;
int main(){
vector<int> v;
int n;
cout<<"Enter no of elements of the array:";
cin>>n;

//taking inputs
cout<<"Enter elements of the array:"<<endl;
for(int i = 0 ;i < n;i++){
    int p;
    cin>>p;
    v.push_back(p);
}

//changing the array elements

for(int i = 0;i < v.size();i++){
    if(i%2==0) v[i]+=10;
    else v[i]*=2;
}
cout<<endl;

//display
for(int i=0;i < v.size();i++)
{
    cout<<v[i]<<" ";

}

}
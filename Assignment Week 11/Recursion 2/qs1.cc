// Print array reverse
#include<iostream>
#include<vector>
using namespace std;




void reverseArray(vector<int> &arr, int size)
{
    if(size < 0) return;
    cout<<arr[size-1]<<endl;
    reverseArray(arr,size-1);
}

int main(){
vector<int> v;
int n;
cout<<"Enter size of the array :";
cin>>n;
for(int i = 0;i < n;i++)
{
    int x;
    cin>>x;
    v.push_back(x);
}


for(int i = 0;i < n;i++)
{
    cout<<v[i]<<endl;

}
cout<<endl;
reverseArray(v,n);
return 0;
}
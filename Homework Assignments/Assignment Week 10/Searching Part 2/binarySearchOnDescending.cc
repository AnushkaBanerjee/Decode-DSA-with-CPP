#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
vector<int> v;
int n;
cout<<"Enter no of elements in the array:";
cin>>n;
for(int i = 0;i < n;i++)
{
    int x;
    cin>>x;
    v.push_back(x);
    
}

for(int i = 0;i < n;i++)
{
    cout<<v[i]<<"\t";
}

int target = 5;
int lo = 0;
int hi = n-1;
bool flag = false;
cout<<endl;
while(lo <= hi)
{
    int mid = lo + (hi - lo)/2;
    if(v[mid]==target)
    {
        flag = true;
        cout<<mid;
        break;
    }

    else if(v[mid]>target) lo = mid+1;
    else hi = mid - 1;
}

if(flag == false) cout<<"Element not found!";


return 0;
}
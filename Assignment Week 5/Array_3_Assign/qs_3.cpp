#include <iostream>
#include <vector>
using namespace std;
int main() {
int n;
cin>>n;
vector<int>v;
int temp;
for(int i = 0;i < n;i++){
    cin>>temp;
    v.push_back(temp);
}


for(int i = 0;i < n;i++){
    cout<<v[i]<<" ";
}
cout<<endl;

bool val = false;
for (int i = 0; i < n; i++) {
int j;
// Checking if ith element is present in array
for (j = 0; j < n; j++)
if (i != j && v[i]==v[j]) break;
if(j == n) {
    cout<<v[i];
    break;
}
}


return 0;
}
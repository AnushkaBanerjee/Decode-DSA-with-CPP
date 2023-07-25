// Qs_3.Given a matrix ‘A’ of dimension n x m and 2 coordinates (l1, r1) and (l2, r2). Return the sum of the
// rectangle from (l1,r1) to (l2, r2).

#include<iostream>
using namespace std;
int main(){
int m,n;
cin>>m>>n;
int arr[m][n];
for(int i = 0;i < m;i++)
{
    for(int j=0;j < n;j++){
        cin>>arr[i][j];
    }
}
int l1,l2,r1,r2;

cout<<"Enter the coordinates:"<<endl;
cout<<"l1:";
cin>>l1;
cout<<"r1:";
cin>>r1;
cout<<"l2:";
cin>>l2;
cout<<"r2:";
cin>>r2;

cout<<endl;


int sum = 0;
for(int i = min(l1,l2);i <= max(l1,l2);i++){
    for(int j =min(r1,r2) ;j <=max(r1,r2) ;j++){
        sum+=arr[i][j];
    }
}

cout<<sum;
return 0;
}
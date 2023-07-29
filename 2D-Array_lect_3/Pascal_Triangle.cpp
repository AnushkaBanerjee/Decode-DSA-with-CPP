// Qs. Given integer numRows generate Pascal's triangle

#include<iostream>
#include<vector>
using namespace std;
vector< vector<int> >PascalsTriangle(int numRows){
    int m = numRows;
    vector< vector<int> >arr;
    for(int i = 1;i <= numRows;i++){
        vector<int>a(i);
        arr.push_back(a);
    }

    //generate
    for(int i = 0;i < numRows;i++){
        for(int j = 0;j <= i;j++){
            if(j == 0 || j==i) arr[i][j]=1;
            else arr[i][j]=arr[i-1][j]+arr[i-1][j-1];
        }
    }

    return arr;
}


int main(){
    int numRows;
    cout<<"numRows:";
    cin>>numRows;
    int n = numRows;
    vector< vector<int> > v = PascalsTriangle(n);
    for(int i = 0;i < n;i++){
        for(int j = 0;j <= i ;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
return 0;
}
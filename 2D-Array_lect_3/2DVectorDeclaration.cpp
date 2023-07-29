#include<iostream>
#include<vector>
using namespace std;
int main(){
// vector<vector<int>>v(3);//vector of 3 vectors
 vector<vector<int>>v(3,vector<int>(5,9));//we can only push vectors in a vector
 //here we are initializing 3 vectors of size = 5 with a common value 9
for(int i = 0;i<3;i++){
    for(int j = 0;j < 5;j++){
        cout<<v[i][j];
    }
    cout<<endl;

}

cout<<v.size()<<endl;
cout<<v[0].size()<<endl;
return 0;
}

//OUTPUT:
// 99999
// 99999
// 99999
// 3
// 5
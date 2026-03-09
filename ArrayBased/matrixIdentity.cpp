#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>>mat1={
        {1,1,1,1},
        {2,2,2,2},
        {3,3,3,3},
        {4,4,4,4}
    };
    vector<vector<int>>mat2={
        {1,1,1,1},
        {2,2,2,2},
        {3,3,3,3},
        {4,4,5,4}
    };
    int m= mat1.size();
    int n= mat1[0].size();

    bool identical=true;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(mat1[i][j] != mat2[i][j]){
               identical=false;
               break;
            }
         
        }
        if(!identical){
            break;
        }
    }
    if(identical){
        cout<<"Matrices are identical";
    }else{
        cout<<"Matrices are not identical";
    }
}
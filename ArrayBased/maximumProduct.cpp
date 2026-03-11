#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    if(n==0) return 0;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int pro=1;
    int maxProduct=INT_MIN;
    
    for(int i=0;i<n;i++){
        pro*=arr[i];
        maxProduct=max(maxProduct,pro);

        if(pro==0){
            pro=1;
        }
    }
    pro=1;
    for(int i=n-1;i>=0;i--){
        pro*=arr[i];
        maxProduct=max(maxProduct,pro);

        if(pro==0){
            pro=1;
        }
    }

    cout<<maxProduct;
}
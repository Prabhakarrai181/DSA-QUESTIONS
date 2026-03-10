#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int totalSum=n*(n+1)/2;
    int sum=0;

    for(int i=0;i<n;i++){
        sum+=arr[i];
    }

    int ans=totalSum-sum;

    cout<<ans;

    return 0;

}
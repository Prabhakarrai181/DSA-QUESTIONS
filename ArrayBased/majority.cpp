#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count=0;
    int cand=arr[0];

    for(int i=0;i<arr.size();i++){
        if(count==0){
            cand=arr[i];
        }

        if(cand==arr[i]){
            count++;
        }else{
            count--;
        }
    }

    cout<<cand;

}
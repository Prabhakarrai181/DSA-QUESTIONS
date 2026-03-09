#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<pair<int,int>>interval={
        {1,3},
        {2,6},
        {8,10},
        {15,18}
    };
    
    vector<pair<int,int>>ans;
    ans.push_back(interval[0]);

    for(int i=1;i<interval.size();i++){
        if(interval[i].first<=ans.back().second){

              ans.back().second = max(ans.back().second , interval[i].second);
        }else{
            ans.push_back(interval[i]);
        }
    }
    for(auto x : ans){

        cout<<"["<<x.first<<","<<x.second<<"]";

    }

}
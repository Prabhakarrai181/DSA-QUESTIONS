#include<bits/stdc++.h>
using namespace std;

int main(){
   string s="Move#into#Front";

   string c="";
   string hash="";

   for(char ch : s){
    if(ch=='#'){
        hash=hash+ch;
    }else{
        c=c+ch;
    }
   }

   cout<<hash+c;


   

}
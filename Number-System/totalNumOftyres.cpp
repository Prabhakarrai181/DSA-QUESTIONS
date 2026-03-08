#include<iostream>
using namespace std;

int main(){   
    int numOfdealers;
    cin>>numOfdealers;

    for(int i=1;i<=numOfdealers;i++){
        int car;
        int bike;
        cin>>car>> bike;
        // cout<<endl;

        cout<<car*4+bike*2<<endl;
    }

}

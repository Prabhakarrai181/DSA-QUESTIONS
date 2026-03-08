#include<iostream>
using namespace std;

int main(){
    int sem;
    cout<<"Enter no of semester: ";
    cin>>sem;

    for(int i=1;i<=sem;i++){
        int totalSub;
        cout<<"Enter no. of subjects in "<< i <<" semester: ";
        cin>>totalSub;

        int maxMarks=-1;

        cout<<"Marks obtained in "<< i <<" semester:";
        for(int j=0 ; j<totalSub; j++){
            int marks;
            cin>>marks;

            if(marks<0 || marks>100){
                cout<<"Invalid Marks"<<endl;
                return 0;


            }
            if(marks>maxMarks){
                maxMarks=marks;
            }
        }

        cout<<"Maximum marks in "<< i <<" semester is "<<maxMarks<<endl;
    }
}
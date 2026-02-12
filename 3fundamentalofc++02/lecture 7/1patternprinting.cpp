#include<iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"enter the number of row:";
    cin>>r;
    // cout<<"enter the number of column";
    // cin>>c;
    for(int i=1;i<=r;i++){
        for(int j=1;j<=r+1-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

}
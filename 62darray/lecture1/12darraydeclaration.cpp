#include<iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"enter the values of rows and columns:";
    cin>>r>>c;
    int a[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<"enter the "<<i<<","<<j<<"element";
            cin>>a[i][j];
        }
    }
        cout<<"THE OUPUT 2D MATRIX IS:"<<endl ;
        for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

}
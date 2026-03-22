#include<iostream>
using namespace std;
int main(){
    int r;
    cout<<"enter the number of rows:";
    cin>>r;
    int c;
    cout<<"enter the number of columns:";
    cin>>c;
    //matrix 1
    int a[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>> a[i][j];
        }
    }
   //matrix 2
    int b[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>> b[i][j];
        }
    }
    //matix 3
     int p[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            p[i][j]=a[i][j]+b[i][j];
        }
    }
    //output
     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<p[i][j]<<" ";
        }
        cout<<endl;
    }

}
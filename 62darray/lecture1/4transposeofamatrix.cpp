#include<iostream>
using namespace std;
int main(){
    int r;
    cout<<"enter the row";
    cin>>r;
    int c;
    cout<<"enter the column";
    cin>>c;
    int a[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<"enter "<<i<<","<<j<<"element:";
            cin>>a[i][j];
        }
    }
    int t[c][r];
        for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            t[i][j]=a[j][i];
        }
    }

    //printing transpose matrix
          for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }

}
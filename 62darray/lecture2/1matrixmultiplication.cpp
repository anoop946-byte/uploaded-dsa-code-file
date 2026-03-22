#include<iostream>
using namespace std;
int main(){
    cout<<"for first matrix"<<endl;
    int m;
    cout<<"enter number of rows:";
    cin>>m;
    int n;
    cout<<"enter number of columns:";
    cin>>n;
    int a[m][n];
    cout<<"enter values"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
     
    cout<<"for second matrix"<<endl;
     int p;
    cout<<"enter number of rows:";
    cin>>p;
    int q;
    cout<<"enter the number of colums";
    cin>>q;
    
        int b[p][q];  
    cout<<"enter values"<<endl;
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            cin>>b[i][j];
        }
    }
    
    int res[m][q] ;
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            res[i][j]=0;
            for(int k=0;k<n;k++){
                res[i][j]=res[i][j] +  a[i][k] *b[k][j]; }
            
        }
    }

    //for printing
       for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            cout<<res[i][j] <<" ";
        }
        cout<<endl;
    }


}
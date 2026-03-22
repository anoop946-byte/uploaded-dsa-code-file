#include<iostream>
using namespace std;
int main(){
    //for taking input
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
    //for printing in wave form
   
    for(int i=0;i<m;i++ ){
        if(i%2==0){
            for(int j=0;j<n;j++){
                cout<<a[i][j]<<" ";
            }
        }
        else{
            for(int j=n-1;j>=0;j--){
                cout<<a[i][j]<<" ";;
            }
        }
        
    }



}
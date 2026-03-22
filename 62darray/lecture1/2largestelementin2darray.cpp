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
        for(int j=0;j<r;j++){
            cout<<"enter "<<i<<","<<j<<"element:";
            cin>>a[i][j];
        }
    }
      int largest=a[0][0];
      for(int i=0;i<r;i++){
        for(int j=0;j<r;j++){
            if(a[i][j]>largest){
                largest=a[i][j];
            }
        }
    }
    cout<<"the largest number is:"<<largest;
    
}
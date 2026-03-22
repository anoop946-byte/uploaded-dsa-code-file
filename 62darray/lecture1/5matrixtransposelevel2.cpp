
 //transpose transform matlab within the same matrix kahani
  
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the order:";
    cin>>n;
    
    int a[n][n];
    //taking input
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"Enter"<<i<<" "<<j<<"element:";
            cin>>a[i][j];
        }
    }

    //printing what you put in
       for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
           
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
   


    //swapping

      for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){

            }
            else if(i<j){
                swap(a[i][j],a[j][i]);
            }
        }
    }

    //printing output
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
           
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}

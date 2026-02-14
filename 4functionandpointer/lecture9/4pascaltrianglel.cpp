#include<iostream>
using namespace std;
int fac(int f){
        int ans=1;
        for(int i=1;i<=f;i++){
            ans=ans*i;
        }
        return ans;
 
    }
    int com(int n,int r){
        int ans=fac(n)/(fac(r)*fac(n-r));
        return ans;

    }
int main(){
    int n;
    cout<<"enter number of lines to be printd:";
    cin>>n;
    
    
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            cout<<com(i,j)<<" ";

        }
        cout<<endl;
    }
    
}
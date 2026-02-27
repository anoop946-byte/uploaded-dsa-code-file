#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"enter the size:";
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int x;
        cout<<"enter "<<i+1<<"element:";
        cin>>x;
        v.push_back(x);
    }
    int nzero=0;
    int nones=0;
    int ntwos=0;
     
    for(int i=0;i<n;i++){
        if(v[i]==0) nzero++;
        if(v[i]==1) nones++;
        if(v[i]==2) ntwos++;
    }
     for(int i=0;i<n;i++){
        if(i<nzero) v[i]=0;
         else if(i<nzero +nones) v[i]=1;
          else v[i]=2;
     }
     for(int i=0;i<n;i++){
        cout<<v[i];
     }
}
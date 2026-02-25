#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of the array:";
    cin>>n;
    vector<int> v;
    for(int i=0;i<=n-1;i++){
        int x;
        cout<<"enter the "<<i+1<<"element";
        cin>>x;
        v.push_back(x);

    }
    int k;
    cout<<"enter the sum";
    cin>>k;
    for(int i=0;i<=n-1;i++){
        for(int j=i;j<=n-1;j++){
            if(v[i]+v[j]==k && i!=j){
                cout<<"the duplet element are"<<v[i]<<"and"<<v[j]<<endl;
            }
        }
    }
}
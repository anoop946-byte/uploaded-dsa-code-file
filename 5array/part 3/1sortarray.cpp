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
        cout<<"enter either 0 or 1";
        cin>>x;
        v.push_back(x);
    }
    int zero=0;
    int one=0;
     for(int i=0;i<=n-1;i++){
        if(v[i]==0){
            zero++;
        }
        else if(v[i]==1){
            one ++;
        }
     }
     for(int i=0;i<zero;i++){
        cout<<"0";

     }
      for(int i=0;i<one;i++){
        cout<<"1";

     }
    
}
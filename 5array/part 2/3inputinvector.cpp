#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    int n;
    cout<<"enter the size :";
    cin>>n;
    for(int i=0;i<=n-1;i++){
        int x;
        cout<<"enter first element:";
        cin>>x;
        v.push_back(x);
    }


}
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array:";
    cin>>n;
    int a[n];
    for(int i=0;i<=n-1;i++){
        cout<<"enter "<<i+1<<"element";
        cin>>a[i];
    }

}
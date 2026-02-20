#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array:";
    cin>>n;
    int a[n];
    for(int i=0;i<=n-1;i++){
        cout<<"enter the "<<i+1<<"element";
        cin>>a[i];
    }
    int large=a[0];
    for(int i=1;i<=n-1;i++){
        if(a[i]>large){
            large=a[i];
        }
    }
    cout<<"the largest element is"<<large;
}
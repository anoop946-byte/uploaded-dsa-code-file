#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number of student:";
    cin>>n;
    int a[n];
    for(int i=0;i<=n-1;i++){
        cout<<"enter "<<i+1<<"student mark:";
        cin>>a[i];
    }
    for(int i=0;i<=n-1;i++){
        if(a[i]<35){
            cout<<"student with roll number"<<i+1<<"get failed"<<endl;
        }
    }
}
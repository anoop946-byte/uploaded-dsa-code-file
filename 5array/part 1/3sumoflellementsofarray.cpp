#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array:";
    cin>>n;
    int a[n];
    for(int i=0;i<=n-1;i++){
        cout<<"enter "<<i+1<<"element";
        cin>>a[i];
    }
    int sum=0;
    for(int i=0;i<=n-1;i++){
        sum=sum+a[i];
    }
    cout<<"the sum of the elements of the array is "<<sum;
}
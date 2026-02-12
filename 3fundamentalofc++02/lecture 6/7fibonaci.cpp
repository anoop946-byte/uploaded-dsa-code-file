#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of whcih fibo you want :";
    cin>>n;
    int a=0;
    int b=1;
    int sum=1;
    for(int i=4;i<=n;i++){
        a=b;
        b=sum;
        sum=a+b;
    }
    if(n==1){
        cout<<0;
    }
    else if(n==2){
        cout<<1;
    }
    else
    cout<<sum;
}
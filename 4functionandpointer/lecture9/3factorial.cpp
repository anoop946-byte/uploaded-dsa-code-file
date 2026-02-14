#include<iostream>
using namespace std;
int fact(int f){
    int res=1;
    for(int i=1;i<=f;i++){
        res=res*i;
    }
    return res;

}
int com(int x,int y){
    return fact(x)/(fact(x-y)*fact(y));

}
int main(){
    int n,r;
    cout<<"enter the values of n and r";
    cin>>n>>r;
    cout<<"the value of combination is"<<com(n,r);

}
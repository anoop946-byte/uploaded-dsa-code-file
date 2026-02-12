#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number:";
    cin>>n;
    int a=1;
    int count =0;
    for(int i=1;n>0;i++){
        count=count+1;
        n=n/10;
    }
    if(a==0){
        cout<<"number of digit is "<<1;
    }else{
    cout<<"number of digit is "<<count;}
}

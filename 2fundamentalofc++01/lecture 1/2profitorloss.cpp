#include<iostream>
using namespace std;
int main(){
    int cp,sp;
    cout<<"enter cost price";
    cin>>cp;
    cout<<"enter selling price";
    cin>>sp;
    if(cp==sp){
        cout<<"no profit no loss";
    }
    if(cp>sp){
        cout<<"loss happened of "<<cp-sp;
    }
    else{
        cout<<"profit happened of "<<sp-cp;
    }
    

}
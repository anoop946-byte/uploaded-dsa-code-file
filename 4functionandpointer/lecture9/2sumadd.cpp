#include<iostream>
using namespace std;
int sum(int x,int y){
    return x+y;
}
int main(){
    int a,b;
    cout<<"enter the first number:";
    cin>>a;
    cout<<"enter the second nubmer:";
    cin>>b;
    cout<<"the sum is"<<sum(a,b);
}
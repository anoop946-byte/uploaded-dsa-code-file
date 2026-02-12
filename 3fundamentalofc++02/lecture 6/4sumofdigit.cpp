#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number:";
    cin>>n;
    int sum=0;
    for(int i=1;n>0;i++){
        int a=n%10;
        sum=sum+a;
        n=n/10;
    }
    cout<<"sum of the digit is "<<sum;
}

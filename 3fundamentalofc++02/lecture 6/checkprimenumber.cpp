#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number you want to check for prime ";
    cin>>n;
    int a=0;
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            a=1;
            break;
        }
    }
    if(n==1){
        cout<<"neither prime nor composite";
    }
    else if(a==0){
        cout<<"yes yes it is  a prime nubmer ";
    }
    else{
        cout<<"no not a prime number";
    }
   
}
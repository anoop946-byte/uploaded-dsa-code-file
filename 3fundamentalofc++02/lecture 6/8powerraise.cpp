#include<iostream>
using namespace std;
int main(){
   int b,p;
   cout<<"enter the base value";
   cin>>b;
   cout<<"enter the power value";
   cin>>p;
   int ans=1;
   for(int i=1;i<=p;i++){
    ans=ans*b;
   }
   cout<<ans;
}
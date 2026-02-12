#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number:";
    cin>>n;
    int r=0;
    int lastdigit;
    for(int i=1;n>0;i++){
        lastdigit=n%10;
        r=r*10 +lastdigit;
        n=n/10;
        
    }
    cout<<"the reverse of the number is "<<r;
}
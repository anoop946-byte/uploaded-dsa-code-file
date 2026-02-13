#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"how many rows:";
    cin>>n;
    for(int i=1;i<=n;i++){
        int x=65;
        for(int j=1;j<=n;j++){
            cout<<(char)x;
            x++;
        }
        cout<<endl;
    }
}     
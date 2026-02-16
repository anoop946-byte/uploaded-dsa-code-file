#include<iostream>
using namespace std;
void find (int x,int *f,int *l){
    *l=x%10;
    for(int i=1;x>9;i++){
        x=x/10;
    }
    *f=x;

}
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    int firstdigit,lastdigit;
    find(n,&firstdigit,&lastdigit);
    cout<<"the firstdigit is "<<firstdigit<<endl;
    cout<<"the lastdigit is "<<lastdigit<<endl;
}
#include<iostream>
using namespace std;
int swap(int* p1,int* p2){
    int temp=*p1;
    *p1=*p2;
    *p2=temp;


}
int main(){
    int a,b;
    cout<<"enter the first and second  number:";
    cin>>a>>b;
    swap(&a,&b);
    cout<<a<<" "<<b;
}
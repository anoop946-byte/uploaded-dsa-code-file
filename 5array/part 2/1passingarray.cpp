#include<iostream>
using namespace std;
void display(int a[],int s){
    for(int i=0;i<=s-1;i++){
        cout<<a[i];
    }

}

int main(){
    int arr[5]={1,2,3,4,5};
    int size=5;
    display(arr,size);
}
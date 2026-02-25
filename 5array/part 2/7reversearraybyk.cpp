#include<iostream>
#include<vector>
using namespace std;
void reversepart(int a,int b,vector<int>&v){
    for(int i=a,j=b;i<j;i++,j--){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
    }
}
 void display(vector<int>&v){
    for(int i=0;i<v.size();i++){
        cout<<v[i];
    }

}
int main(){
    vector<int> v;
    int n;
    cout<<"enter the size of the array:";
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cout<<"enter the "<<i+1<<" element:";
        cin>>x;
        v.push_back(x);
    }
    int k;
    cout<<"enter the value of rotation:";
    if(k>n){
        k=k%10;
    }
    cin>>k;
    reversepart(0,n-k-1,v);
    reversepart(n-k,n-1,v);
    reversepart(0,n-1,v);
    display(v);
}
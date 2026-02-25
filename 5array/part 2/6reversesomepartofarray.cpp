#include <iostream>
#include <vector>
using namespace std;

   void display(vector<int> &a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
   }
    void reversepart(int a,int b,vector<int> &v){
        for(int i=a,j=b;i<j;i++,j--){
            int temp=v[i];
            v[i]=v[j];
            v[j]=temp;
        }

   }
int main()
{
    vector<int> v;
    v.push_back(1); 
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    
    display(v);
    reversepart(0,2,v);
    cout<<endl;
    display(v);
}
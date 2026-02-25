// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the size:";
//     cin>>n;
//     vector<int> v;
//     for(int i=0;i<=n-1;i++){
//         int x;
//         cout<<"enter the"<<i+1<<"element";
//         cin>>x;
//         v.push_back(x);
//     }
//     vector<int> r;
//     for(int i=n-1;i>=0;i--){
//         r.push_back(v[i]);
//     }
//     cout<<"reverse order is ";
//     for(int i=0;i<=n-1;i++){

//         cout<<r[i]<<" ";
//     }
  

// }

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"enter the size:";
    cin>>n;
    vector<int> v;
    for(int i=0;i<=n-1;i++){
        int x;
        cout<<"enter the"<<i+1<<"element";
        cin>>x;
        v.push_back(x);
    }
    
    for(int i=0,j=n-1-i;i<j;i++,j--){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
    }

    for(int i=0;i<=n-1;i++){
        cout<<v[i]<<" ";
    }
    
  

}
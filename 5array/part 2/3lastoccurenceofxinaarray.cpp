// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the size of the array:";
//     cin>>n;
//     int k;
//     cout<<"enter the element you want to search:";
//     cin>>k;
//     vector<int> v;
//     for(int i=0;i<=n-1;i++){
//         int x;
//         cout<<"enter "<<i+1<<"element:";
//         cin>>x;
//         v.push_back(x);
//     }
//     for(int i=n-1;i>=0;i--){
//         if(v[i]==k){
//             cout<<"value last occurence is at "<< i <<"index";
//         }
//     }

// }
#include<iostream>
#include<vector>;
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array:";
    cin>>n;
    vector<int> v;
    for(int i=0;i<=n-1;i++){
        int x;
        cout<<"enter the "<<i+1<<"element";
        cin>>x;
        v.push_back(x);
    }
    int k;
    cout<<"enter the element you want to search for:";
    cin>>k;
    for(int i=n-1;i>=0;i--){
        if(v[i]==k){
            cout<<"last occurence is "<<i<<"index";
            break;
        }
    }
}
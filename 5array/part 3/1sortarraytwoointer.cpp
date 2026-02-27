// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the size of the array:";
//     cin>>n;
//     vector<int> v;
//     for(int i=0;i<=n-1;i++){
//         int x;
//         cout<<"enter either 0 or 1 :";
//         cin>>x;
//         v.push_back(x);
//     }
//       int i=0;
//       int j=n-1;
//     while(i<j){
//        if(v[i]==1 && v[j]==0){
//         v[i]=0;
//         v[j]=1;
//         i++;
//         j--;
//        }
//        if(v[i]==0) i++;
//        if(v[i]==1) j--;
//     }
   
    
    
//     for(int i=0;i<=n-1;i++){
//         cout<<v[i];
//     }
// }

#include <iostream>
#include <vector>
#include <algorithm> // for swap
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << " (0 or 1): ";
        cin >> v[i];
    }

    int i = 0, j = n - 1;

    while (i < j) {
        if (v[i] == 0) {
            i++; // already correct
        } else if (v[j] == 1) {
            j--; // already correct
        } else {
            swap(v[i], v[j]); // put 0 on left, 1 on right
            i++;
            j--;
        }
    }

    cout << "Sorted array: ";
    for (int x : v) cout << x << " ";
    cout << endl;

    return 0;
}
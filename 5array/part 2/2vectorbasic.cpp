#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.at(4)=4;
    v.push_back(5);
    v.pop_back();
    for(int i=0;i<=v.size()-1;i++){
        cout<<v[i];
    }
}
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
   
  string s;
  cout<<"enter the string";
  getline(cin,s);
  int l=s.size();
  if(l%2==0){
    reverse(s.begin(),s.begin()+l/2);
    cout<<s;
    
  }
  else{
    
    cout<<"length should be even";
  }

    
}
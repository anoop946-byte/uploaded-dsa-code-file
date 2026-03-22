//counting number of vowel
#include<iostream>
using namespace std;
int main(){
    
     string s;
     getline(cin,s);
     int count=0;
     for(int i=0;i<s.length();i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
            count++;   
        }
    }
    cout<<"the number of the vowels in the given string is "<<count;
}
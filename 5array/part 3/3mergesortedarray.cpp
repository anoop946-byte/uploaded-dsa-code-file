#include<iostream>
#include<vector>
using namespace std;
vector<int> merge(vector<int> & arr1,vector<int> & arr2){
        int n=arr1.size();
        int m=arr2.size();
        
        vector<int> arr3(n+m);
        int i=0,j=0,k=0;

        while(i<=n-1 && j<=m-1){
            if(arr1[i]<arr2[j]){
                arr3[k]=arr1[i];
                k++;
                i++;
            }
            else{ //arr2[j]<arr3[i];
                arr3[k]=arr2[j];
                k++;
                j++;
            }
        }
      
        //remaining element ko fill karne ka tarika.......
        if(i==n){ //array 1 bhar gaya hai 
            while(j<=m-1){
                arr3[k]=arr2[j];
                k++;
                j++;
            }
        }
        if(j==m){
            while(i<=n-1){
                arr3[k]=arr1[i];
                k++;
                i++;
            }
        }
        return  arr3;

}





int main(){
    vector<int> arr1;
    arr1.push_back(1);
    arr1.push_back(3);
    arr1.push_back(5);
    arr1.push_back(7);
    arr1.push_back(9);
    vector<int> arr2;
    arr2.push_back(2);
    arr2.push_back(4);
    arr2.push_back(6);
    arr2.push_back(8);
    arr2.push_back(10);
   
   vector<int> arr3 =merge(arr1,arr2);

   for(int i=0;i<=arr3.size()-1;i++){
    cout<<arr3[i]<<" ";
   }


}
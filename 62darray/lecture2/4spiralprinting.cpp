#include <iostream>
using namespace std;
int main()
{
    // for taking input
    int m;
    cout << "enter number of rows:";
    cin >> m;
    int n;
    cout << "enter number of columns:";
    cin >> n;
    int a[m][n];
    cout << "enter values" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    // for printing in spiral  form
    int top=0;
    int left=0;
    int bottom=n-1;
    int right=n-1; 



    // for (int i = 0; i < m; i++)
    // {

    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << a[j][i] << " ";
    //     }
    // }
    for(int i=left;i<right;i++){
        cout<<a[top][i]<<" ";
    }
    top++;
    for(int i=top;i<bottom;i++){
        cout<<a[i][right]<<" ";
    }
    right--;
    for(int i=right;i>=left;i--){
        cout<<a[bottom][i]<<" ";
    }
    bottom--;
    for(int i=bottom;i>=top;i--){
        cout<<a[i][left]<<" ";
    }
    left++;

}
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
    // for printing in  column wave form

    for (int i = 0; i < m; i++)
    {

        for (int j = 0; j < n; j++)
        {
            cout << a[j][i] << " ";
        }
    }
}
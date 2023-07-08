#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;

    vector<int> arr1(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }

    int m;
    cin >> m;

    int arr2[m];
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }

    int x;
    cin >> x;

    arr1.resize(n+m);

    if(n-1 >= x)
    {
        for (int i = n - 1; i >= x; i--)
        {
            arr1[i + m] = arr1[i];
        }
    }


    for (int i = 0; i < m; i++)
    {
        arr1[x + i] = arr2[i];
    }
    n += m;

    for (int i = 0; i < n; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;
    return 0;
}

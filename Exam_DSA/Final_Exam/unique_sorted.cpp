#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, num;
        cin >> n;
        set<int> list;

        for(int i = 0; i < n; i++)
        {
            cin >> num;
            list.insert(num);
        }

        vector<int> sortedNumbers(list.rbegin(), list.rend());

        for(int num : sortedNumbers)
        {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}

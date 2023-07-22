#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        int a[n];
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int maxCount = 0;
        int number = a[0];

        sort(a, a + n);

        int currentCount = 1;

        for(int i = 1; i < n; i++)
        {
            if(a[i] == a[i - 1])
            {
                currentCount++;
            }
            else
            {
                if(currentCount > maxCount || (currentCount == maxCount && a[i - 1] > number))
                {
                    maxCount = currentCount;
                    number = a[i - 1];
                }
                currentCount = 1;
            }
        }

        if(currentCount > maxCount || (currentCount == maxCount && a[n - 1] > number))
        {
            maxCount = currentCount;
            number = a[n - 1];
        }

        cout << number << " " << maxCount << endl;
    }

    return 0;
}

#include<bits/stdc++.h>
using namespace std;


int findNumber(int arr[], int left, int right, int k)
{
    while(left <= right)
    {
        int mid = left + (right - left) / 2;

        if(arr[mid] == k)
        {
            return mid;
        }

        else if(arr[mid] < k)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int n, k;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cin >> k;

    int index = findNumber(arr, 0, n - 1, k);

    if(index == -1)
    {
        cout << "Not Found" << endl;
    }
    else
    {
        cout << index << endl;
    }

    return 0;
}

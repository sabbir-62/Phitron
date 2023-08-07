#include<bits/stdc++.h>
using namespace std;


int findNumber(int arr[], int left, int right, int k)
{
    int count = 1;
    while(left <= right)
    {
        int mid = left + (right - left) / 2;

        if(arr[mid] == k)
        {
            if(arr[mid-1] == k || arr[mid+1] == k){
                count ++;
                return count;
            }
            return count;
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
    return count;
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

    int count = findNumber(arr, 0, n - 1, k);

    if(count > 1)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}

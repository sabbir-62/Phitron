#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    int i, n;

    cin>>n;
    int arr1[n];
    int arr2[n];

    for(i=0; i<n; i++)
    {
        cin>>arr1[i];

    }

    for(i=0; i<n; i++)
    {
        cin>>arr2[i];

    }

    for(i=0; i<n; i++)
    {
        v.push_back(arr2[i]);

    }

    for(i=0; i<n; i++)
    {
        v.push_back(arr1[i]);

    }

    for(int val: v)
    {
        cout<<val<<endl;

    }

    return 0;
}

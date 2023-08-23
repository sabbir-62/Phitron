#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    int n;

    cin>>n;

    for(int i=0; i<n; i++)
    {
        int u;
        cin>>u;
        v.push_back(u);
    }

    for(int i=n-1; i>=0; i--)
    {
        cout<<v[i]<<endl;
    }
    return 0;
}

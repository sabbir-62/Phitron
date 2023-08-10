#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
vector<int> adj[N];

int main()
{

    int m, n;
    cin>>n>>m;

    for(int i = 0; i< m; i++)
    {
        int u, v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for(int i = 0; i<=n; i++)
    {
        cout<<"List "<< i <<": ";
        for(auto j:adj[i])
        {
            cout<<"("<< j;
        }

        cout<<endl;
    }


    return 0;
}

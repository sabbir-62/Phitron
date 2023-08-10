#include<bits/stdc++.h>
using namespace std;

const int N = 1e3+5;
vector<int> adj[N];

void bfs(int s)
{
    queue<int> q;
    q.push(s);

}

int main()
{
    int m, n;
    cin >> m >> n;

    for(int i=0; i<m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    bfs(1);


    return 0;
}

#include<bits/stdc++.h>
using namespace std;

const int N = 1e3+5;
vector<int> adj[N];
bool visited[N];
int level[N];

void bfs(int s)
{
    queue<int> q;
    q.push(s);
    visited[s] = true;

    while(!=q.empty())
    {
        int u = q.front();
        q.pop();

        for(auto v: adj[u])
        {
            if(visited[v] == true) continue;
            q.push(v);
            visited[v] = true;
        }
    }
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

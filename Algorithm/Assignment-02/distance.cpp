#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;

vector<int> adj[N];
int dist[N];

void bfs(int source, int nodes) {
    queue<int> q;
    q.push(source);
    dist[source] = 0;

    while (!q.empty()) {
        int node = q.front();
        q.pop();

        for (int neighbor : adj[node]) {
            if (dist[neighbor] == -1) {
                dist[neighbor] = dist[node] + 1;
                q.push(neighbor);
            }
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;

    for(int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int q;
    cin >> q;

    while (q--) {
        int a, b;
        cin >> a >> b;

        memset(dist, -1, sizeof(dist));

        bfs(a, n);

        if (dist[b] == -1) {
            cout << -1 << endl;
        } else {
            cout << dist[b] << endl;
        }
    }

    return 0;
}

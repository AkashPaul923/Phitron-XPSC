#include <bits/stdc++.h>
using namespace std;

void dijkstra(int src, vector<vector<pair<int, int>>> &adj_list, vector<int> &dis, vector<int> &par)
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    dis[src] = 0;
    pq.push({dis[src], src});
    while (!pq.empty())
    {
        pair<int, int> parent = pq.top();
        pq.pop();
        int parent_node = parent.second;
        int parent_dist = parent.first;
        for (auto child : adj_list[parent_node])
        {
            int child_node = child.first;
            int child_dist = child.second;
            if (parent_dist + child_dist < dis[child_node])
            {
                dis[child_node] = parent_dist + child_dist;
                pq.push({dis[child_node], child_node});
                par[child_node] = parent_node;
            }
        }
    }
}

void path_print(int src, vector<int> &par)
{
    if (src == -1)
        return;
    path_print(par[src], par);
    cout << src << " ";
}

int main()
{
    int n, e;
    cin >> n >> e;
    vector<vector<pair<int, int>>> adj_list(n + 1);
    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        adj_list[a].push_back({b, c});
        adj_list[b].push_back({a, c});
    }
    vector<int> dis(n + 1, INT_MAX);
    vector<int> par(n + 1, -1);
    dijkstra(1, adj_list, dis, par);
    if (dis[n] == INT_MAX)
        cout << -1;
    else
        path_print(n, par);

    return 0;
}
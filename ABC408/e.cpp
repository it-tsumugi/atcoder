#include <iostream>
#include <vector>
#include <queue>
#include <unordered_set>
#include <algorithm>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

struct FastHash
{
    ull operator()(ull x) const
    {
        x ^= x >> 33;
        x *= 0xff51afd7ed558ccdULL;
        x ^= x >> 33;
        x *= 0xc4ceb9fe1a85ec53ULL;
        x ^= x >> 33;
        return x;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<vector<pair<int, ll>>> graph(n + 1);
    for (int i = 0; i < m; i++)
    {
        int u, v;
        ll w;
        cin >> u >> v >> w;
        graph[u].emplace_back(v, w);
        graph[v].emplace_back(u, w);
    }

    vector<int> dist(n + 1, -1);
    queue<int> q;
    q.push(n);
    dist[n] = 0;

    while (!q.empty())
    {
        int v = q.front();
        q.pop();
        for (auto [next, _] : graph[v])
        {
            if (dist[next] == -1)
            {
                dist[next] = dist[v] + 1;
                q.push(next);
            }
        }
    }

    unordered_set<ull, FastHash> visited;
    priority_queue<pair<ll, ull>, vector<pair<ll, ull>>, greater<>> pq;

    auto encode = [](int v, ll or_val)
    {
        return (ull(v) << 32) | (or_val & 0xFFFFFFFF);
    };

    pq.emplace(0, encode(1, 0));

    while (!pq.empty())
    {
        auto [cost, state] = pq.top();
        pq.pop();

        int v = state >> 32;

        if (!visited.insert(state).second)
            continue;
        if (v == n)
        {
            cout << cost << endl;
            return 0;
        }
        if (dist[v] == -1)
            continue;

        vector<pair<ll, int>> edges;
        for (auto [next, w] : graph[v])
        {
            if (dist[next] != -1)
            {
                edges.emplace_back(cost | w, next);
            }
        }

        sort(edges.begin(), edges.end());

        for (auto [new_cost, next] : edges)
        {
            pq.emplace(new_cost, encode(next, new_cost));
        }
    }

    return 0;
}

#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define fastIO ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define endl "\n"
#define MAXN 10002

typedef pair<int, int> pii;

// INF variable for comparing u
const int INF = 1e9;

// Edge class for storing edges in a vector
class Edge
{
    public:
    int u, v, w;
    
    Edge(int u, int v, int w)
    {
        this->u = u, this->v = v, this->w = w;
    }
};

vector<Edge> graph;

// Edges input in the graph
void input(int n, int m)
{
    int u, v, w;
    while(m--)
    {
        cin >> u >> v >> w;
        graph.push_back({u, v, w});
    }
}

void bellman_ford(int n, int m)
{
    // Initialising distance array
    int dis[n + 2];
    for(auto &x: dis)
        x = INF;
    dis[0] = 0;

    // basic bellman ford algorithm
    for(int i = 0; i < n - 1; i++)
    {
        for(auto e: graph)
        {
            if(dis[e.u] == INF) continue;   // if dis[u] is already infinite then no point in comparing
            
            if(dis[e.v] > dis[e.u] + e.w)
            {
                dis[e.v] = dis[e.u] + e.w;
            }
        }
    }

    bool cycle = false;

    // If after running loop 1 more time dis[v] value changes it means there is a negative cycle
    for(auto e: graph)
    {
        if(dis[e.v] > dis[e.u] + e.w)
        {
            cycle = true;
            break;
        }
    }
    
    cout << cycle << endl;

}

// taking input and calling bellman_ford function
void solve()
{
    int n, m;
    cin >> n >> m;
    
    input(n, m);

    bellman_ford(n, m);
}

int main()
{
    fastIO
    int t;
    cin >> t;
    while(t--)
    {
        // clearing the graph for each new edges input
        graph.clear();
        solve();
    }
    return 0;
}

void dfs(int start, vector<bool> & visited, vector <int> & prev, const vector <vector <int> > g)
{
    visited[start] = true;
    for (auto u : g[start])
        if (!visited[u]) 
        {
            prev[u] = start;
            dfs(u, visited, prev, g);
        }
}

int main()
{
    vector <bool> visited(n + 1);
    vector <int> prev(n + 1, -1);
    dfs(start, visited, prev, g);
 }

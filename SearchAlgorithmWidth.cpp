vector<int> D(n + 1, -1);
D[start] = 0;
queue<int> Q;
Q.push(s);
while (!Q.empty())
{
    int u = Q.front();
    Q.pop();
    for (auto v : V[u])
        if (D[v] == -1)
        {
            D[v] = D[u] + 1;
            Q.push(v);
        }
}

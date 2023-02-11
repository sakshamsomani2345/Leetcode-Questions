#include <bits/stdc++.h>
using namespace std;
vector<int> shortestAlternatingPaths(int n, vector<vector<int>> &redEdges,
                                     vector<vector<int>> &blueEdges)
{
    vector<vector<pair<int, int>>> adj(n);
    for (auto &redEdge : redEdges)
    {
        adj[redEdge[0]].push_back({redEdge[1], 0});
    }
    for (auto &blueEdge : blueEdges)
    {
        adj[blueEdge[0]].push_back(make_pair(blueEdge[1], 1));
    }

    vector<int> answer(n, -1);
    vector<vector<bool>> visit(n, vector<bool>(2));
    queue<vector<int>> q;

    // Start with node 0, with number of steps as 0 and undefined color -1.
    q.push({0, 0, -1});
    visit[0][1] = visit[0][0] = true;
    answer[0] = 0;

    while (!q.empty())
    {
        auto element = q.front();
        int node = element[0], steps = element[1], prevColor = element[2];
        q.pop();

        for (auto &[neighbor, color] : adj[node])
        {
            if (!visit[neighbor][color] && color != prevColor)
            {
                visit[neighbor][color] = true;
                q.push({neighbor, 1 + steps, color});
                if (answer[neighbor] == -1)
                    answer[neighbor] = 1 + steps;
            }
        }
    }
    return answer;
}
vector<int> shortestAlternatingPaths(int n, vector<vector<int>> &redEdges, vector<vector<int>> &blueEdges)
{
    vector<pair<int, int>> adj[n];

    for (auto element : redEdges)
        adj[element[0]].push_back({element[1], 1});

    for (auto element : blueEdges)
        adj[element[0]].push_back({element[1], 2});

    vector<vector<bool>> visited(n, vector<bool>(3, false));
    vector<int> distance(n, -1);
    queue<vector<int>> q;

    q.push({0, 0, 0}); // {node , steps , color }
    visited[0][1] = visited[0][2] = true;
    distance[0] = 0;

    while (!q.empty())
    {
        int node = q.front()[0], steps = q.front()[1], color = q.front()[2];
        q.pop();

        for (auto element : adj[node])
        {
            if (element.second == color)
                continue;
            if (!visited[element.first][element.second])
            {
                visited[element.first][element.second] = true;

                if (distance[element.first] == -1)
                    distance[element.first] = 1 + steps;

                q.push({element.first, 1 + steps, element.second});
            }
        }
    }
    return distance;
}
int main()
{
    int n;
    cin >> n;
    vector<vector<int>> red(n, vector<int>(2));
    vector<vector<int>> blue(n, vector<int>(2));
    shortestAlternatingPaths(n, red, blue);
}
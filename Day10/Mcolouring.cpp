#include<bits/stdc++.h>
bool isSafe(vector<vector<int>> &graph, vector<int> &color, int node, int n, int col)
    {
        for(int i = 0; i < n; i++)
        {
    
            if(i != node && graph[i][node] == 1 && color[i] == col) return false;
        }
        return true;
    }
    bool solve(vector<vector<int>> &graph, vector<int> &color, int m, int n, int node)
    {
        if(node == n) return true;
        
        for(int col = 1; col <= m; col++)
        {
            if(isSafe(graph, color, node, n, col))
            {
                color[node] = col;
                if(solve(graph, color, m, n, node+1)) return true;
                color[node] = 0;
            }
        }
        return false;
    }
string graphColoring(vector<vector<int>> &mat, int m) {
    vector<int> color(mat.size(), 0);
    if(solve(mat, color, m, mat.size(), 0)) return "YES";
    return "NO";
}
#include <iostream>
#include <vector>
using namespace std;

//Time Complexity: O(V + E)
//Space Complexity: O(V + E)

// g - graph, v - visited, c - current
void dfs(vector<vector<int>>& g, vector<bool>& v, int c) {
   v[c] = true;
    
   // example node process
   cout << c << '\n';

   for(int u : g[c]) {
       if(v[u] == false) {
           dfs(g, v, u);
       }
   }
}


int main() {
    int n = 8;
    vector<vector<int>> graph(n + 1);
    graph[1] = {2, 4};
    graph[2] = {};
    graph[3] = {1, 2};
    graph[4] = {6, 7};
    graph[5] = {3, 4};
    graph[6] = {};
    graph[7] = {};
    graph[8] = {7};

    vector<bool> visited(n + 1, false);
    dfs(graph, visited, 1);
    
    return 0;
}
